#include "panel.h"

/*
Class Constructor

STUDENT MUST WRITE CODE FOR THIS
1) Create an instance of unique_ptr<TicTacToeManager> using std::make_unique

@param wxWindow* the parent window for the Panel class
*/
Panel::Panel(wxWindow* parent)
	: wxPanel(parent, -1)
{
	//Create an instance of unique_ptr<TicTacToeManager> using std::make_unique 

	auto vbox = new wxBoxSizer(wxVERTICAL);
	auto top_horizontal_box = get_top_box_sizer();

	auto mid_horizontal_box = get_mid_box_sizer();
	tic_tac_toe_grid_3 = get_grid_sizer(3);
	tic_tac_toe_grid_3->Show(false);
	tic_tac_toe_grid_4 = get_grid_sizer(4);
	tic_tac_toe_grid_4->Show(false);

	vbox->Add(top_horizontal_box, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);
	vbox->Add(mid_horizontal_box, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);
	vbox->Add(tic_tac_toe_grid_3, 0, wxALIGN_RIGHT | wxTOP | wxRIGHT | wxBOTTOM, 10);
	vbox->Add(tic_tac_toe_grid_4, 0, wxALIGN_RIGHT | wxTOP | wxRIGHT | wxBOTTOM, 10);

	SetSizer(vbox);
}

/*
Creates a box sizer with two radio buttons and one list box to display at the top of the panel.

@returns wxBoxSizer* a box sizer with wxWidgets in Horizontal layout
*/
wxBoxSizer * Panel::get_top_box_sizer()
{
	wxString game_type_choices[]{ wxT("Tic Tac Toe 3"), wxT("Tic Tac Toe 4") };
	wxString first_player_choices[]{ wxT("X"), wxT("O") };

	auto hbox0 = new wxBoxSizer(wxHORIZONTAL);
	game_type_radio = new wxRadioBox(this, -1, wxT("Game Type"), wxDefaultPosition, wxDefaultSize,
		WXSIZEOF(game_type_choices), game_type_choices, 1, wxRA_SPECIFY_COLS);

	first_player_radio = new wxRadioBox(this, -1, wxT("First Player"), wxDefaultPosition,
		wxDefaultSize, WXSIZEOF(first_player_choices), first_player_choices, 1, wxRA_SPECIFY_COLS);

	history_list_box = new wxListBox(this, -1, wxPoint(-1, -1), wxSize(-1, -1));
	history_list_box->Bind(wxEVT_LISTBOX, &Panel::on_list_box_click, this);

	hbox0->Add(game_type_radio);
	hbox0->Add(first_player_radio);
	hbox0->Add(history_list_box);

	return hbox0;
}

/*
Creates a wxGridSizer with a label, textbox for winner text, and button to start the game.
Box sizer will display below the top box sizer.

@returns wxBoxSizer* a box sizer with wxWidgets in Horizontal layout
*/
wxBoxSizer * Panel::get_mid_box_sizer()
{
	auto hbox1 = new wxBoxSizer(wxHORIZONTAL);
	auto winner_label = new wxStaticText(this, wxID_ANY, wxT("Winner: "),
		wxDefaultPosition, wxSize(70, -1));
	hbox1->Add(winner_label, 0);

	winner_text = new wxTextCtrl(this, wxID_ANY);
	winner_text->Disable();
	hbox1->Add(winner_text, 1);

	start_button = new wxButton(this, -1, wxT("Start"));
	start_button->Bind(wxEVT_BUTTON, &Panel::on_start_button_click, this);
	hbox1->Add(start_button);

	return hbox1;
}

/*
Displays the tic tac toe buttons for tic tac toe 3 or 4.

@param size determines if tic tac toe 3 or 4 will be placed

@returns wxGridSizer with the tic tac toe buttons to simulate the board.
*/
wxGridSizer * Panel::get_grid_sizer(int size)
{
	auto gs = new wxGridSizer(size, size, size, size);

	for (int i = 0; i < size*size; i++)
	{
		auto btn = new wxButton(this, -1, std::to_string(i + 1));
		btn->Bind(wxEVT_BUTTON, &Panel::on_peg_button_click, this);
		gs->Add(btn, 0, wxEXPAND);
	}

	return gs;
}

/*
Event function will execute each time the start button is clicked.

1) Resets button labels and enables button for mouse clicks. DONE
2) Gets a tic tac toe game from the TicTacToeManager class using the GameType enumeration
   tic_tac_toe_3 or tic_tac_toe_4 options. STUDENT MUST WRITE CODE FOR THIS
3) Shows and hides tic tac toe 3 or 4 depending on game_type_radio selection. STUDENT MUST WRITE CODE FOR THIS
4) Check first_player_radio to determine whether X or O goes first. STUDENT MUST WRITE CODE FOR THIS
5) Disables the start button while a game is in progress.

@parame wxCommandEvent wxWidget class stores the button that fired the event
*/
void Panel::on_start_button_click(wxCommandEvent & event)
{
	set_button_properties(tic_tac_toe_grid_3);
	set_button_properties(tic_tac_toe_grid_4);

	if (game_type_radio->GetSelection() == 0)
	{
		//2) Gets a tic tac toe game from the TicTacToeManager class using the GameType enumeration
		//tic_tac_toe_3 or tic_tac_toe_4 options.STUDENT MUST WRITE CODE FOR THIS

		tic_tac_toe_grid_4->Show(false);
		tic_tac_toe_grid_3->Show(true);
	}
	else if (game_type_radio->GetSelection() == 1)
	{
		//3) Gets a tic tac toe game from the TicTacToeManager class using the GameType enumeration
		//tic_tac_toe_3 or tic_tac_toe_4 options.STUDENT MUST WRITE CODE FOR THIS

		tic_tac_toe_grid_3->Show(false);
		tic_tac_toe_grid_4->Show(true);
	}

	//STUDENT MUST WRITE CODE FOR THIS
	//4) Check first_player_radio GetSelection to determine whether X or O goes first. 
	//if radio button selection 0 call the board start game function with X or O

	auto btn = dynamic_cast<wxButton*>(event.GetEventObject());
	btn->Disable();
	this->Layout();
}

/*
Executes each time a peg button is clicked.
1) Disables clicked button.
2) Gets the clicked position from the button.
3) Marks the board for TicTacToeBoard instance
4) Checks if game over. When game over:
	a) Update winner_text label with the winner text (X, O or C).
	b) Add an entry to history_list_box.
	c) Enable the start_button.
	d) Save the board game to the manager.
*/
void Panel::on_peg_button_click(wxCommandEvent & event)
{
	auto btn = dynamic_cast<wxButton*>(event.GetEventObject());
	btn->Disable();
	auto val = btn->GetLabel();
	btn->SetLabel(board->get_player());
	board->mark_board(std::stoi(val.ToStdString()));

	if (board->game_over())
	{
		wxMessageBox(wxT("Winner!"), wxT("TicTacToe"), wxICON_INFORMATION);
		history_list_box->Append("game");
		winner_text->SetLabel(board->get_winner());
		start_button->Enable();
		manager->save_game(std::move(board));
	}
}

/*
Gets a board from the TicTacToeManager boards vector to update the peg button labels to show
the final result of a previously played game.

1) Gets a reference to a vector of board using the get_games function
   of the TicTacToeManager.   STUDENT MUST WRITE CODE FOR THIS
2) Gets a reference to one board from the boards vector using the history_list_box
   GetSelection function.     STUDENT MUST WRITE CODE FOR THIS
3) Determines if the current board is a TicTacToe3 and sets the sizer variable to
   a tic_tac_toe_grid_3 or 4 . DONE
4) Iterates through the children of Tic tac toe 3 or 4 sizer updates the
   label and disables buttons. DONE
5) Sets the winner_text value to the winner of the selected board. STUDENT MUST WRITE CODE FOR THIS

*/
void Panel::on_list_box_click(wxCommandEvent& event)
{
	//1) Write code to get a const reference to a vector of boards by calling the manager get_games function

	//2) Write code get a const reference to one board using the history_list_box GetSelection function as 
	//   the index for the boards vector

	wxGridSizer* sizer;

	if (board->get_pegs().size() == 9)
	{
		sizer = tic_tac_toe_grid_3;
		tic_tac_toe_grid_4->Show(false);
		tic_tac_toe_grid_3->Show(true);

	}
	else
	{
		sizer = tic_tac_toe_grid_4;
		tic_tac_toe_grid_3->Show(false);
		tic_tac_toe_grid_4->Show(true);
	}

	int i = 1;
	for (auto item : sizer->GetChildren())
	{	//call board get_pegs[i-1] and call the val data member
		item->GetWindow()->SetLabel(board->get_pegs()[i - 1].val);
		item->GetWindow()->Disable();
		i++;
	}

	//5)Write code to set the winner_text value to the board get_winner function

}

/*
UPdates the button label for all the buttons in the wxGridSizer
Enables all the buttons for mouse clicks.

*/
void Panel::set_button_properties(wxGridSizer* sizer)
{
	int i = 1;
	for (auto item : sizer->GetChildren())
	{
		item->GetWindow()->SetLabel(std::to_string(i));
		item->GetWindow()->Enable();
		i++;
	}
}