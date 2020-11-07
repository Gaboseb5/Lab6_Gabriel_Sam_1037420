#pragma once
#include "Doublelinkedlist.h";
#include "Node.h";
#include "Figurasgeometricas.h";
#include "Circulo.h";
#include "Rectangulo.h";
#include "Triangulo.h";
#include "Pentagono.h";

namespace Lab6GabrielSam1037420 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Doublelinkedlist<Figurasgeometricas*>* myFigureList;
		MyForm(void)
		{
			InitializeComponent();
			myFigureList = new Doublelinkedlist<Figurasgeometricas*>();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtcircunferencia;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnrectangulo;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtrecalto;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtrecbase;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ btntriangulo;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txttribase;
	private: System::Windows::Forms::TextBox^ txttrialtura;


	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ btnpentagono;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtpenapotema;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtpenlado;

	private: System::Windows::Forms::Panel^ pnfiguras;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txttrilado;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtcircunferencia = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnrectangulo = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtrecalto = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtrecbase = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btntriangulo = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txttribase = (gcnew System::Windows::Forms::TextBox());
			this->txttrialtura = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->btnpentagono = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtpenapotema = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtpenlado = (gcnew System::Windows::Forms::TextBox());
			this->pnfiguras = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txttrilado = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtcircunferencia);
			this->groupBox1->Location = System::Drawing::Point(29, 30);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(245, 169);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Círculo";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 116);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(184, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Insertar círculo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Circunferencia";
			// 
			// txtcircunferencia
			// 
			this->txtcircunferencia->Location = System::Drawing::Point(121, 45);
			this->txtcircunferencia->Name = L"txtcircunferencia";
			this->txtcircunferencia->Size = System::Drawing::Size(100, 22);
			this->txtcircunferencia->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnrectangulo);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->txtrecalto);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->txtrecbase);
			this->groupBox2->Location = System::Drawing::Point(313, 30);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(264, 169);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Rectangulo";
			// 
			// btnrectangulo
			// 
			this->btnrectangulo->Location = System::Drawing::Point(48, 116);
			this->btnrectangulo->Name = L"btnrectangulo";
			this->btnrectangulo->Size = System::Drawing::Size(184, 34);
			this->btnrectangulo->TabIndex = 3;
			this->btnrectangulo->Text = L"Insertar rectangulo";
			this->btnrectangulo->UseVisualStyleBackColor = true;
			this->btnrectangulo->Click += gcnew System::EventHandler(this, &MyForm::btnrectangulo_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Altura";
			// 
			// txtrecalto
			// 
			this->txtrecalto->Location = System::Drawing::Point(132, 73);
			this->txtrecalto->Name = L"txtrecalto";
			this->txtrecalto->Size = System::Drawing::Size(100, 22);
			this->txtrecalto->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Base";
			// 
			// txtrecbase
			// 
			this->txtrecbase->Location = System::Drawing::Point(132, 40);
			this->txtrecbase->Name = L"txtrecbase";
			this->txtrecbase->Size = System::Drawing::Size(100, 22);
			this->txtrecbase->TabIndex = 2;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->txttrilado);
			this->groupBox3->Controls->Add(this->btntriangulo);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->txttribase);
			this->groupBox3->Controls->Add(this->txttrialtura);
			this->groupBox3->Location = System::Drawing::Point(612, 30);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(262, 169);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Triángulo";
			// 
			// btntriangulo
			// 
			this->btntriangulo->Location = System::Drawing::Point(57, 116);
			this->btntriangulo->Name = L"btntriangulo";
			this->btntriangulo->Size = System::Drawing::Size(184, 34);
			this->btntriangulo->TabIndex = 7;
			this->btntriangulo->Text = L"Insertar triángulo";
			this->btntriangulo->UseVisualStyleBackColor = true;
			this->btntriangulo->Click += gcnew System::EventHandler(this, &MyForm::btntriangulo_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 21);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Base";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Altura";
			// 
			// txttribase
			// 
			this->txttribase->Location = System::Drawing::Point(141, 21);
			this->txttribase->Name = L"txttribase";
			this->txttribase->Size = System::Drawing::Size(100, 22);
			this->txttribase->TabIndex = 6;
			// 
			// txttrialtura
			// 
			this->txttrialtura->Location = System::Drawing::Point(141, 54);
			this->txttrialtura->Name = L"txttrialtura";
			this->txttrialtura->Size = System::Drawing::Size(100, 22);
			this->txttrialtura->TabIndex = 9;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->btnpentagono);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->txtpenapotema);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->txtpenlado);
			this->groupBox4->Location = System::Drawing::Point(908, 30);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(253, 169);
			this->groupBox4->TabIndex = 1;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Pentágono";
			// 
			// btnpentagono
			// 
			this->btnpentagono->Location = System::Drawing::Point(48, 116);
			this->btnpentagono->Name = L"btnpentagono";
			this->btnpentagono->Size = System::Drawing::Size(184, 34);
			this->btnpentagono->TabIndex = 12;
			this->btnpentagono->Text = L"Insertar pentágono";
			this->btnpentagono->UseVisualStyleBackColor = true;
			this->btnpentagono->Click += gcnew System::EventHandler(this, &MyForm::btnpentagono_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(17, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Lado";
			// 
			// txtpenapotema
			// 
			this->txtpenapotema->Location = System::Drawing::Point(132, 73);
			this->txtpenapotema->Name = L"txtpenapotema";
			this->txtpenapotema->Size = System::Drawing::Size(100, 22);
			this->txtpenapotema->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 73);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 17);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Apotema";
			// 
			// txtpenlado
			// 
			this->txtpenlado->Location = System::Drawing::Point(132, 40);
			this->txtpenlado->Name = L"txtpenlado";
			this->txtpenlado->Size = System::Drawing::Size(100, 22);
			this->txtpenlado->TabIndex = 11;
			// 
			// pnfiguras
			// 
			this->pnfiguras->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pnfiguras->Location = System::Drawing::Point(29, 225);
			this->pnfiguras->Name = L"pnfiguras";
			this->pnfiguras->Size = System::Drawing::Size(845, 323);
			this->pnfiguras->TabIndex = 2;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(908, 225);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(253, 68);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(26, 88);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 17);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Lado";
			// 
			// txttrilado
			// 
			this->txttrilado->Location = System::Drawing::Point(141, 88);
			this->txttrilado->Name = L"txttrilado";
			this->txttrilado->Size = System::Drawing::Size(100, 22);
			this->txttrilado->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1200, 560);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->pnfiguras);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txtcircunferencia->Text->Trim() != "") {
			Figurasgeometricas* newCircle = new Circulo();
			newCircle->width = Convert::ToDouble(txtcircunferencia->Text);
			newCircle->type = 1;
			newCircle->area = newCircle->GetArea();
			newCircle->perimeter = newCircle->GetPerimeter();
			myFigureList->InsertAtEnd(newCircle);


			
			if (!myFigureList->IsEmpty()) {
				Node<Figurasgeometricas*>* temp = myFigureList->start;

				for (int i = 0; i < myFigureList->count; i++) {
					Figurasgeometricas* actual = temp->value;
					DrawNode(pnfiguras->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->width, actual->width,actual->lon);
					temp = temp->next;
				}

			}
			

			MessageBox::Show("Circulo insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

		
private: System::Void btnrectangulo_Click(System::Object^ sender, System::EventArgs^ e) {

	if ((txtrecalto->Text->Trim() != "") && (txtrecbase->Text->Trim() != "")) {
		Figurasgeometricas* newRectangle = new Rectangulo();
		newRectangle->height = Convert::ToDouble(txtrecalto->Text);
		newRectangle->width = Convert::ToDouble(txtrecbase->Text);
		newRectangle->type = 2;
		newRectangle->area = newRectangle->GetArea();
		newRectangle->perimeter = newRectangle->GetPerimeter();
		myFigureList->InsertAtEnd(newRectangle);

		
		if (!myFigureList->IsEmpty()) {
			Node<Figurasgeometricas*>* temp = myFigureList->start;

			for (int i = 0; i < myFigureList->count; i++) {
				Figurasgeometricas* actual = temp->value;
				DrawNode(pnfiguras->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width,actual->lon);
				temp = temp->next;
			}

		}
		

		MessageBox::Show("Rectangulo insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}


}
	   void DrawNode(Graphics^ canvas, int posx, int posy, int type, double area, double perimeter, double height, double width,double lon) {
		   Brush^ brush = gcnew SolidBrush(Color::Red);
		   Brush^ brushstring = gcnew SolidBrush(Color::White);
		   System::Drawing::Pen^ pen;
		   System::Drawing::Font^ fuente = gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold);
		   
		   
		   switch (type)
		   {
		   case 1: {
			   canvas->FillEllipse(brush, RectangleF(posx, posy, width * 5, width * 5));
		   }break;
		   case 2: {
			   canvas->FillRectangle(brush, RectangleF(posx, posy, width * 5, height * 5));
		   }break;
		   case 3: {
			   
			   Point p1(20, 60);
			   Point p2(40, 60);
			   Point p3(30, 30);
			   Point p4(20, 60);
			   array <System::Drawing::Point>^ point = {p1,p2,p3,p4};
			   canvas->FillPolygon(brush, point);
			   
		   }break;
		   case 4: {

			   //canvas->FillRectangle(brush, RectangleF(posx, posy, width * 5, height * 5));

			   Point p1 (100, 60);
			   Point p2(120, 60);
			   Point p3(140, 30);
			   Point p4(110, 10);
			   Point p5(80, 30);
			   Point p6(100, 60);
			   array <System::Drawing::Point>^ point = { p1,p2,p3,p4,p5,p6};
			   canvas->FillPolygon(brush, point);
		


		   }break;
		   default:
			   break;
		   }
		   richTextBox1->Text = " ";
		   richTextBox1->Text = richTextBox1->Text + "\nArea: " + area + ". Perimetro: " + perimeter;
		  
		   canvas->DrawString("Area: " + area, fuente, brushstring, posx + 1, posy + 20);
	   }
private: System::Void btntriangulo_Click(System::Object^ sender, System::EventArgs^ e) {

	if ((txttrialtura->Text->Trim() != "") && (txttribase->Text->Trim() != "") && (txttrilado->Text->Trim()!="")) {
		Figurasgeometricas* newTriangulo = new Triangulo();
		newTriangulo->height = Convert::ToDouble(txttrialtura->Text);
		newTriangulo->width = Convert::ToDouble(txttribase->Text);
		newTriangulo->lon = Convert::ToDouble(txttrilado->Text);
		newTriangulo->type = 3;
		newTriangulo->area = newTriangulo->GetArea();
		newTriangulo->perimeter = newTriangulo->GetPerimeter(); 
		myFigureList->InsertAtEnd(newTriangulo);

		
		if (!myFigureList->IsEmpty()) {
			Node<Figurasgeometricas*>* temp = myFigureList->start;

			for (int i = 0; i < myFigureList->count; i++) {
				Figurasgeometricas* actual = temp->value;
				DrawNode(pnfiguras->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width,actual->lon);
				temp = temp->next;
			}

		}
		

		MessageBox::Show("Triangulo insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}

private: System::Void btnpentagono_Click(System::Object^ sender, System::EventArgs^ e) {

	if ((txtpenapotema->Text->Trim() != "") && (txtpenlado->Text->Trim() != "")) {
		Figurasgeometricas* newPentagono = new Pentagono();
		newPentagono->height = Convert::ToDouble(txtpenapotema->Text);
		newPentagono->width = Convert::ToDouble(txtpenlado->Text);
		newPentagono->type = 4;
		newPentagono->area = newPentagono->GetArea();
		newPentagono->perimeter = newPentagono->GetPerimeter();
		myFigureList->InsertAtEnd(newPentagono);

		
		if (!myFigureList->IsEmpty()) {
			Node<Figurasgeometricas*>* temp = myFigureList->start;

			for (int i = 0; i < myFigureList->count; i++) {
				Figurasgeometricas* actual = temp->value;
				DrawNode(pnfiguras->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width,actual->lon);
				temp = temp->next;
			}

		}
		

		MessageBox::Show("Pentagono insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
};
}
