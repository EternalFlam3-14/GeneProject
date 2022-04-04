//Library inclusions
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <iostream>
#include <fstream>
#include <include/Functions/generate.h>


//Declaring F1 Genotype
int F1A1, F1A2, F1B1, F1B2, F1C1, F1C2, F1D1, F1D2, F1E1, F1E2, F1F1, F1F2, F1G1, F1G2, F1H1, F1H2, F1I1, F1I2, F1J1, F1J2,F1K1, F1K2, F1K3, F1L1, F1L2, F1M1, F1M2, F1N1, F1N2, F1O1, F1O2, F1P1, F1P2, F1Q1, F1Q2, F1R1, F1R2;
int PA, PB, PC, PD, PE, PF, PG, PH, PI, PJ, PK, PL, PM, PN, PO, PP, PQ, PR; // Genome sequencing
int Allele1, Allele2, Seq, Px, Gene; //Genome sequencing
//Declaring Phenotype string
std::string FPA, FPB, FPC, FPD, FPE, FPF, FPG, FPH, FPI, FPJ, FPK, FPL, FPM, FPN, FPO, FPP, FPQ, FPR; //F For F1, Full F1 Phenotype
bool F1H, F2H, F3H, F4H, F5H, F6H, F7H, F8H, F9H, F10H, F11H, F12H, F13H, F14H, F15H, F16H, F17H; //Homo either true or false as placeholders
bool Complete, GeneTranscribed, GenomeComplete;; // Controls the program
std::ofstream file; // Declares the genome file opening


bool GeneGenerator()
{
    srand(time(NULL)); //Used to call random genotypes
	
	//First number determines the range of real numbers, second number is the lowest available number
	F1A1 = rand() % 2 + 1, F1A2 = rand() % 2 + 1, F1B1 = rand() % 2 + 1, F1B2 = rand() % 2 + 1,
	F1C1 = rand() % 2 + 1, F1C2 = rand() % 2 + 1, F1D1 = rand() % 2 + 1, F1D2 = rand() % 2 + 1, F1E1 = rand() % 2 + 1,
	F1E2 = rand() % 2 + 1, F1F1 = rand() % 2 + 1, F1F2 = rand() % 2 + 1, F1G1 = rand() % 2 + 1, F1G2 = rand() % 2 + 1,
	F1H1 = rand() % 2 + 1, F1H2 = rand() % 2 + 1, F1I1 = rand() % 3 + 1, F1I2 = rand() % 3 + 1, F1J1 = rand() % 2 + 1,
	F1J2 = rand() % 2 + 1, F1K1 = rand() % 3 + 1, F1K2 = rand() % 3 + 1, F1L1 = rand() % 2 + 1, F1L2 = rand() % 2 + 1, F1M1 = rand() % 2 + 1, F1M2 = rand() % 2 + 1, F1N1 = rand() % 2 + 1, F1N2 = rand() % 2 + 1, F1O1 = rand() % 2 + 1, F1O2 = rand() % 2 + 1, F1P1 = rand() % 2 + 1, F1P2 = rand() % 2 + 1, F1Q1 = rand() % 2 + 1, F1Q2 = rand() % 2 + 1, F1R1 = rand() % 2 + 1, F1R2 = rand() % 2 + 1;	return true;
}

bool GenotypeSequence()
{

	Seq = 1; //Starts the sequence

	while (GenomeComplete == 0)
	{
		while (GeneTranscribed == true)
		{
			if (Gene == 1)
			{
				PA = Px;
				++Seq, GeneTranscribed = false;
				//std::cout << "Seq 1: " << Seq << " GeneTranscribed: " << GeneTranscribed << " Gene: " << Gene << std::endl;
			}
			if (Gene == 2)
			{
				PB = Px;
				++Seq, GeneTranscribed = false;
				//std::cout << "Seq 2: " << Seq << " GeneTranscribed: " << GeneTranscribed << " Gene: " << Gene << std::endl;
			}
			if (Gene == 3)
			{
				PC = Px;
				++Seq, GeneTranscribed = false;
				//std::cout << "Seq 3: " << Seq << " GeneTranscribed: " << GeneTranscribed << " Gene: " << Gene << std::endl;
			}
			if (Gene == 4)
			{
				PD = Px;
				++Seq, GeneTranscribed = false;
				//std::cout << "Seq 4: " << Seq << " GeneTranscribed: " << GeneTranscribed << " Gene: " << Gene << std::endl;
			}
			if (Gene == 5)
			{
				PE = Px;
				++Seq, GeneTranscribed = false;
				//std::cout << "Seq 5: " << Seq << " GeneTranscribed: " << GeneTranscribed << " Gene: " << Gene << std::endl;
			}
			if (Gene == 6)
			{
				PF = Px;
				++Seq, GeneTranscribed = false;
				//std::cout << "Seq 6: " << Seq << " GeneTranscribed: " << GeneTranscribed << " Gene: " << Gene << std::endl;
			}
			if (Gene == 7)
			{
				PG = Px;
				++Seq, GeneTranscribed = false;
				//std::cout << "Seq 7: " << Seq << " GeneTranscribed: " << GeneTranscribed << " Gene: " << Gene << std::endl;
			}
			if (Gene == 8)
			{
				PH = Px;
				++Seq, GeneTranscribed = false;
				//std::cout << "Seq 8: " << Seq << " GeneTranscribed: " << GeneTranscribed << " Gene: " << Gene << std::endl;
			}
			if (Gene == 9)
			{
				PI = Px;
				++Seq, GeneTranscribed = false;
				//std::cout << "Seq 9: " << Seq << " GeneTranscribed: " << GeneTranscribed << " Gene: " << Gene << std::endl;
			}
			if (Gene == 10)
			{
				PJ = Px;
				++Seq, GeneTranscribed = false;
				//std::cout << "Seq 10: " << Seq << " GeneTranscribed: " << GeneTranscribed << " Gene: " << Gene << std::endl;
			}
			if (Gene == 11)
			{
				PK = Px;
				++Seq, GeneTranscribed = false;
				//std::cout << "Seq 11: " << Seq << " GeneTranscribed: " << GeneTranscribed << " Gene: " << Gene << std::endl;
			}
			if (Gene == 12)
			{
				PL = Px;
				++Seq, GeneTranscribed = false;
				//std::cout << "Seq 12: " << Seq << " GeneTranscribed: " << GeneTranscribed << " Gene: " << Gene << std::endl;
			}
			if (Gene == 13)
			{
				PM = Px;
				++Seq, GeneTranscribed = false;
				//std::cout << "Seq 13: " << Seq << " GeneTranscribed: " << GeneTranscribed << " Gene: " << Gene << std::endl;
			}
			if (Gene == 14)
			{
				PN = Px;
				++Seq, GeneTranscribed = false;
				//std::cout << "Seq 14: " << Seq << " GeneTranscribed: " << GeneTranscribed << " Gene: " << Gene << std::endl;
			}
			if (Gene == 15)
			{
				PO = Px;
				++Seq, GeneTranscribed = false;
				//std::cout << "Seq 15: " << Seq << " GeneTranscribed: " << GeneTranscribed << " Gene: " << Gene << std::endl;
			}
			if (Gene == 16)
			{
				PP = Px;
				++Seq, GeneTranscribed = false;
				//std::cout << "Seq 16: " << Seq << " GeneTranscribed: " << GeneTranscribed << " Gene: " << Gene << std::endl;
			}
			if (Gene == 17)
			{
				PQ = Px;
				++Seq, GeneTranscribed = false;
				//std::cout << "Seq 17: " << Seq << " GeneTranscribed: " << GeneTranscribed << " Gene: " << Gene << std::endl;
			}
		}

		while (GeneTranscribed == false)
		{
			if (Seq == 1)
			{
				Allele1 = F1A1, Allele2 = F1A2, Gene = 1;  //Calling Genome into local variables, the only thing that needs to change
				//std::cout << "Sequence " << Seq << " begin. The Alleles: " << AllePe << Allstd::endl;

				if (Allele1 == 1)
				{
					if (Allele2 == 1)
					{
						Px = 11, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 2)
				{
					if (Allele2 == 1)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 22, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 3)
				{
					if (Allele2 == 1)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 33, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				else
				{
					//ErrorToggle = Seq;
				}
			}
			if (Seq == 2)
			{
				Allele1 = F1B1, Allele2 = F1B2, Gene = 2;  //Calling Genome into local variables, the only thing that needs to change
				//std::cout << "Sequence " << Seq << " begin. The Alleles: " << AllePe << Allstd::endl;

				if (Allele1 == 1)
				{
					if (Allele2 == 1)
					{
						Px = 11, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 2)
				{
					if (Allele2 == 1)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 22, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 3)
				{
					if (Allele2 == 1)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 33, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				else
				{
					//ErrorToggle = Seq;  //Error Readout
				}
			}
			if (Seq == 3)
			{
				Allele1 = F1C1, Allele2 = F1C2, Gene = 3;  //Calling Genome into local variables, the only thing that needs to change
				//std::cout << "Sequence " << Seq << " begin. The Alleles: " << AllePe << Allstd::endl;

				if (Allele1 == 1)
				{
					if (Allele2 == 1)
					{
						Px = 11, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 2)
				{
					if (Allele2 == 1)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 22, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 3)
				{
					if (Allele2 == 1)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 33, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				else
				{
					//ErrorToggle = Seq;  //Error Readout
				}
			}
			if (Seq == 4)
			{
				Allele1 = F1D1, Allele2 = F1D2, Gene = 4;  //Calling Genome into local variables, the only thing that needs to change
				//std::cout << "Sequence " << Seq << " begin. The Alleles: " << AllePe << Allstd::endl;

				if (Allele1 == 1)
				{
					if (Allele2 == 1)
					{
						Px = 11, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 2)
				{
					if (Allele2 == 1)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 22, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 3)
				{
					if (Allele2 == 1)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 33, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				else
				{
					//ErrorToggle = Seq;  //Error Readout
				}
			}
			if (Seq == 5)
			{
				Allele1 = F1E1, Allele2 = F1E2, Gene = 5;  //Calling Genome into local variables, the only thing that needs to change
				//std::cout << "Sequence " << Seq << " begin. The Alleles: " << AllePe << Allstd::endl;

				if (Allele1 == 1)
				{
					if (Allele2 == 1)
					{
						Px = 11, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 2)
				{
					if (Allele2 == 1)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 22, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 3)
				{
					if (Allele2 == 1)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 33, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				else
				{
					//ErrorToggle = Seq;  //Error Readout
				}
			}
			if (Seq == 6)
			{
				Allele1 = F1F1, Allele2 = F1F2, Gene = 6;  //Calling Genome into local variables, the only thing that needs to change
				//std::cout << "Sequence " << Seq << " begin. The Alleles: " << AllePe << Allstd::endl;

				if (Allele1 == 1)
				{
					if (Allele2 == 1)
					{
						Px = 11, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 2)
				{
					if (Allele2 == 1)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 22, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 3)
				{
					if (Allele2 == 1)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 33, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				else
				{
					//ErrorToggle = Seq;  //Error Readout
				}
			}
			if (Seq == 7)
			{
				Allele1 = F1G1, Allele2 = F1G2, Gene = 7;  //Calling Genome into local variables, the only thing that needs to change
				//std::cout << "Sequence " << Seq << " begin. The Alleles: " << AllePe << Allstd::endl;

				if (Allele1 == 1)
				{
					if (Allele2 == 1)
					{
						Px = 11, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 2)
				{
					if (Allele2 == 1)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 22, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 3)
				{
					if (Allele2 == 1)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 33, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				else
				{
					//ErrorToggle = Seq;  //Error Readout
				}
			}
			if (Seq == 8)
			{
				Allele1 = F1H1, Allele2 = F1H2, Gene = 8;  //Calling Genome into local variables, the only thing that needs to change
				//std::cout << "Sequence " << Seq << " begin. The Alleles: " << AllePe << Allstd::endl;

				if (Allele1 == 1)
				{
					if (Allele2 == 1)
					{
						Px = 11, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 2)
				{
					if (Allele2 == 1)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 22, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 3)
				{
					if (Allele2 == 1)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 33, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				else
				{
					//ErrorToggle = Seq;  //Error Readout
				}
			}
			if (Seq == 9)
			{
				Allele1 = F1I1, Allele2 = F1I2, Gene = 9;  //Calling Genome into local variables, the only thing that needs to change
				//std::cout << "Sequence " << Seq << " begin. The Alleles: " << AllePe << Allstd::endl;

				if (Allele1 == 1)
				{
					if (Allele2 == 1)
					{
						Px = 11, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 2)
				{
					if (Allele2 == 1)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 22, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 3)
				{
					if (Allele2 == 1)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 33, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				else
				{
					//ErrorToggle = Seq;  //Error Readout
				}
			}
			if (Seq == 10)
			{
				Allele1 = F1J1, Allele2 = F1J2, Gene = 10;  //Calling Genome into local variables, the only thing that needs to change
				//std::cout << "Sequence " << Seq << " begin. The Alleles: " << AllePe << Allstd::endl;

				if (Allele1 == 1)
				{
					if (Allele2 == 1)
					{
						Px = 11, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 2)
				{
					if (Allele2 == 1)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 22, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 3)
				{
					if (Allele2 == 1)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 33, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				else
				{
					//ErrorToggle = Seq;  //Error Readout
				}
			}
			if (Seq == 11)
			{
				Allele1 = F1K1, Allele2 = F1K2, Gene = 11;  //Calling Genome into local variables, the only thing that needs to change
				//std::cout << "Sequence " << Seq << " begin. The Alleles: " << AllePe << Allstd::endl;

				if (Allele1 == 1)
				{
					if (Allele2 == 1)
					{
						Px = 11, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 2)
				{
					if (Allele2 == 1)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 22, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 3)
				{
					if (Allele2 == 1)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 33, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				else
				{
					//ErrorToggle = Seq;  //Error Readout
				}
			}
			if (Seq == 12)
			{
				Allele1 = F1L1, Allele2 = F1L2, Gene = 12;  //Calling Genome into local variables, the only thing that needs to change
				//std::cout << "Sequence " << Seq << " begin. The Alleles: " << AllePe << Allstd::endl;

				if (Allele1 == 1)
				{
					if (Allele2 == 1)
					{
						Px = 11, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 2)
				{
					if (Allele2 == 1)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 22, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 3)
				{
					if (Allele2 == 1)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 33, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				else
				{
					//ErrorToggle = Seq;  //Error Readout
				}
			}
			if (Seq == 13)
			{
				Allele1 = F1M1, Allele2 = F1M2, Gene = 13;  //Calling Genome into local variables, the only thing that needs to change
				//std::cout << "Sequence " << Seq << " begin. The Alleles: " << AllePe << Allstd::endl;

				if (Allele1 == 1)
				{
					if (Allele2 == 1)
					{
						Px = 11, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 2)
				{
					if (Allele2 == 1)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 22, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 3)
				{
					if (Allele2 == 1)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 33, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				else
				{
					//ErrorToggle = Seq;  //Error Readout
				}
			}
			if (Seq == 14)
			{
				Allele1 = F1N1, Allele2 = F1N2, Gene = 14;  //Calling Genome into local variables, the only thing that needs to change
				//std::cout << "Sequence " << Seq << " begin. The Alleles: " << AllePe << Allstd::endl;

				if (Allele1 == 1)
				{
					if (Allele2 == 1)
					{
						Px = 11, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 2)
				{
					if (Allele2 == 1)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 22, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 3)
				{
					if (Allele2 == 1)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 33, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				else
				{
					//ErrorToggle = Seq;  //Error Readout
				}
			}
			if (Seq == 15)
			{
				Allele1 = F1O1, Allele2 = F1O2, Gene = 15;  //Calling Genome into local variables, the only thing that needs to change
				//std::cout << "Sequence " << Seq << " begin. The Alleles: " << AllePe << Allstd::endl;

				if (Allele1 == 1)
				{
					if (Allele2 == 1)
					{
						Px = 11, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 2)
				{
					if (Allele2 == 1)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 22, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 3)
				{
					if (Allele2 == 1)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 33, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				else
				{
					//ErrorToggle = Seq;  //Error Readout
				}
			}
			if (Seq == 16)
			{
				Allele1 = F1P1, Allele2 = F1P2, Gene = 16;  //Calling Genome into local variables, the only thing that needs to change
				//std::cout << "Sequence " << Seq << " begin. The Alleles: " << AllePe << Allstd::endl;

				if (Allele1 == 1)
				{
					if (Allele2 == 1)
					{
						Px = 11, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 2)
				{
					if (Allele2 == 1)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 22, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 3)
				{
					if (Allele2 == 1)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 33, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				else
				{
					//ErrorToggle = Seq;  //Error Readout
				}
			}
			if (Seq == 17)
			{
				Allele1 = F1Q1, Allele2 = F1Q2, Gene = 17;  //Calling Genome into local variables, the only thing that needs to change
				//std::cout << "Sequence " << Seq << " begin. The Alleles: " << AllePe << Allstd::endl;

				if (Allele1 == 1)
				{
					if (Allele2 == 1)
					{
						Px = 11, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 2)
				{
					if (Allele2 == 1)
					{
						Px = 12, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 22, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				if (Allele1 == 3)
				{
					if (Allele2 == 1)
					{
						Px = 13, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 2)
					{
						Px = 23, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
					if (Allele2 == 3)
					{
						Px = 33, GeneTranscribed = true;
						//std::cout << "Transcription Complete\n";
					}
				}
				else
				{
					//ErrorToggle = Seq;  //Error Readout
				}
			}
			if (Seq == 18)
			{
				GenomeComplete = true, GeneTranscribed = true, Seq = 0, Gene = 0;
			}
		}
	}


	return true;
}

void Index()
{
	//11 = dominant homo, 22 = recessive1 homo, 33 = recessive2 homo
	//12 = hetero d/r1, 13 = hetero d/r2, 23 = hetero r1/r2
	int GenC, IndexC = 0;
	std::string PhenC;
	bool FH;

	++IndexC; //Initiate

	while (IndexC == 1) //High Heat
	{
		GenC = PA;

		if (GenC == 11)
		{
			PhenC = "Normal Heat Tolerance";
			FH = true;
			++IndexC;
		}
		if (GenC == 22)
		{
			PhenC = "High Heat Tolerance";
			FH = true;
			++IndexC;
		}
		if (GenC == 33)
		{
			PhenC = "Low Heat Tolerance";
			FH = true;
			++IndexC;
		}
		if (GenC == 12)
		{
			PhenC = "Normal Heat Tolerance";
			FH = false;
			++IndexC;
		}
		if (GenC == 13)
		{
			PhenC = "Normal Heat Tolerance";
			FH = false;
			++IndexC;
		}
		if (GenC == 23)
		{
			PhenC = "Normal Heat Tolerance";
			FH = false;
			++IndexC;
		}

		FPA = PhenC; //Unfortunately this has to be below the Index in order to store properly
		F1H = FH;

	}
	while (IndexC == 2) //Low Heat
	{
		GenC = PB;
		//std::cout << FPA << ". Here's the first phenotype.\n";

		if (GenC == 11)
		{
			PhenC = "Normal Cold Tolerance";
			FH = true;
			++IndexC;
		}
		if (GenC == 22)
		{
			PhenC = "High Cold Tolerance";
			FH = true;
			++IndexC;
		}
		if (GenC == 33)
		{
			PhenC = "Low Cold Tolerance";
			FH = true;
			++IndexC;
		}
		if (GenC == 12)
		{
			PhenC = "Normal Cold Tolerance";
			FH = false;
			++IndexC;
		}
		if (GenC == 13)
		{
			PhenC = "Normal Cold Tolerance";
			FH = false;
			++IndexC;
		}
		if (GenC == 23)
		{
			PhenC = "Normal Cold Tolerance";
			FH = false;
			++IndexC;
		}


		FPB = PhenC; //Unfortunately this has to be below the Index in order to store properly
		F2H = FH;

	}	
	while (IndexC == 3) //Drought Resistance
	{
		GenC = PC;
		//std::cout << FPB << ". Here's the last phenotype.\n";

		if (GenC == 11)
		{
			PhenC = "Normal Drought Tolerance";
			FH = true;
			++IndexC;
		}
		if (GenC == 22)
		{
			PhenC = "High Drought Tolerance";
			FH = true;
			++IndexC;
		}
		if (GenC == 33)
		{
			PhenC = "Low Drought Tolerance";
			FH = true;
			++IndexC;
		}
		if (GenC == 12)
		{
			PhenC = "Normal Drought Tolerance";
			FH = false;
			++IndexC;
		}
		if (GenC == 13)
		{
			PhenC = "Normal Drought Tolerance";
			FH = false;
			++IndexC;
		}
		if (GenC == 23)
		{
			PhenC = "Normal Drought Tolerance";
			FH = false;
			++IndexC;
		}

		FPC = PhenC; //Unfortunately this has to be below the Index in order to store properly
		F3H = FH;

	}	
	while (IndexC == 4) //Bug Resistance
	{
		GenC = PD;
		//std::cout << FPC << ". Here's the last phenotype.\n";

		if (GenC == 11)
		{
			PhenC = "Normal Bug Resistance";
			FH = true;
			++IndexC;
		}
		if (GenC == 22)
		{
			PhenC = "High Bug Resistance";
			FH = true;
			++IndexC;
		}
		if (GenC == 33)
		{
			PhenC = "Low Bug Resistance";
			FH = true;
			++IndexC;
		}
		if (GenC == 12)
		{
			PhenC = "Normal Bug Resistance";
			FH = false;
			++IndexC;
		}
		if (GenC == 13)
		{
			PhenC = "Normal Bug Tolerance";
			FH = false;
			++IndexC;
		}
		if (GenC == 23)
		{
			PhenC = "Normal Bug Tolerance";
			FH = false;
			++IndexC;
		}

		FPD = PhenC; //Unfortunately this has to be below the Index in order to store properly
		F4H = FH;

	}	
	while (IndexC == 5) //Mold Resistance
	{
		GenC = PE;
		//std::cout << FPD << ". Here's the last phenotype.\n";

		if (GenC == 11)
		{
			PhenC = "Normal Mold Resistance";
			FH = true;
			++IndexC;
		}
		if (GenC == 22)
		{
			PhenC = "High Mold Resistance";
			FH = true;
			++IndexC;
		}
		if (GenC == 33)
		{
			PhenC = "Low Mold Resistance";
			FH = true;
			++IndexC;
		}
		if (GenC == 12)
		{
			PhenC = "Normal Mold Resistance";
			FH = false;
			++IndexC;
		}
		if (GenC == 13)
		{
			PhenC = "Normal Mold Resistance";
			FH = false;
			++IndexC;
		}
		if (GenC == 23)
		{
			PhenC = "Normal Mold Resistance";
			FH = false;
			++IndexC;
		}

		FPE = PhenC; //Unfortunately this has to be below the Index in order to store properly
		F5H = FH;

	}	
	while (IndexC == 6) //Veg Rate
	{
		GenC = PF;
		//std::cout << FPE << ". Here's the last phenotype.\n";

		if (GenC == 11)
		{
			PhenC = "Normal Veg Rate";
			FH = true;
			++IndexC;
		}
		if (GenC == 22)
		{
			PhenC = "High Veg Rate";
			FH = true;
			++IndexC;
		}
		if (GenC == 33)
		{
			PhenC = "Low Veg Rate";
			FH = true;
			++IndexC;
		}
		if (GenC == 12)
		{
			PhenC = "Normal Veg Rate";
			FH = false;
			++IndexC;
		}
		if (GenC == 13)
		{
			PhenC = "Normal Veg Rate";
			FH = false;
			++IndexC;
		}
		if (GenC == 23)
		{
			PhenC = "Normal Veg Rate";
			FH = false;
			++IndexC;
		}

		FPF = PhenC; //Unfortunately this has to be below the Index in order to store properly
		F6H = FH;

	}	
	while (IndexC == 7) //Flower Rate
	{
		GenC = PG;
		//std::cout << FPF << ". Here's the last phenotype.\n";

		if (GenC == 11)
		{
			PhenC = "Normal Flower Rate";
			FH = true;
			++IndexC;
		}
		if (GenC == 22)
		{
			PhenC = "High Flower Rate";
			FH = true;
			++IndexC;
		}
		if (GenC == 33)
		{
			PhenC = "Low Flower Rate";
			FH = true;
			++IndexC;
		}
		if (GenC == 12)
		{
			PhenC = "Normal Flower Rate";
			FH = false;
			++IndexC;
		}
		if (GenC == 13)
		{
			PhenC = "Normal Flower Rate";
			FH = false;
			++IndexC;
		}
		if (GenC == 23)
		{
			PhenC = "Normal Flower Rate";
			FH = false;
			++IndexC;
		}

		FPG = PhenC; //Unfortunately this has to be below the Index in order to store properly
		F7H = FH;

	}	
	while (IndexC == 8) //Flower Density
	{
		GenC = PH;
		//std::cout << FPG << ". Here's the last phenotype.\n";

		if (GenC == 11)
		{
			PhenC = "Normal Flower Density";
			FH = true;
			++IndexC;
		}
		if (GenC == 22)
		{
			PhenC = "High Flower Density";
			FH = true;
			++IndexC;
		}
		if (GenC == 33)
		{
			PhenC = "Low Flower Density";
			FH = true;
			++IndexC;
		}
		if (GenC == 12)
		{
			PhenC = "Normal Flower Density";
			FH = false;
			++IndexC;
		}
		if (GenC == 13)
		{
			PhenC = "Normal Flower Density";
			FH = false;
			++IndexC;
		}
		if (GenC == 23)
		{
			PhenC = "Normal Flower Rate";
			FH = false;
			++IndexC;
		}

		FPH = PhenC; //Unfortunately this has to be below the Index in order to store properly
		F8H = FH;

	}	
	while (IndexC == 9) //Flower Color
	{
		GenC = PI;
		//std::cout << FPH << ". Here's the last phenotype.\n";

		if (GenC == 11)
		{
			PhenC = "Green Flowers";
			FH = true;
			++IndexC;
		}
		if (GenC == 22)
		{
			PhenC = "Violet Flowers";
			FH = true;
			++IndexC;
		}
		if (GenC == 33)
		{
			PhenC = "Orange Flowers";
			FH = true;
			++IndexC;
		}
		if (GenC == 12)
		{
			PhenC = "Blue Flowers";
			FH = false;
			++IndexC;
		}
		if (GenC == 13)
		{
			PhenC = "Yellow Flowers";
			FH = false;
			++IndexC;
		}
		if (GenC == 23)
		{
			PhenC = "Red Flowers";
			FH = false;
			++IndexC;
		}

		FPI = PhenC; //Unfortunately this has to be below the Index in order to store properly
		F9H = FH;

	}	
	while (IndexC == 10) //Pistil Color
	{
		GenC = PJ;
		//std::cout << FPI << ". Here's the last phenotype.\n";

		if (GenC == 11)
		{
			PhenC = "Mild Pistil";
			FH = true;
			++IndexC;
		}
		if (GenC == 22)
		{
			PhenC = "Red Pistil";
			FH = true;
			++IndexC;
		}
		if (GenC == 33)
		{
			PhenC = "Gold Pistil";
			FH = true;
			++IndexC;
		}
		if (GenC == 12)
		{
			PhenC = "Mild Red Pistil";
			FH = false;
			++IndexC;
		}
		if (GenC == 13)
		{
			PhenC = "Mild Gold Pistil";
			FH = false;
			++IndexC;
		}
		if (GenC == 23)
		{
			PhenC = "Orange Pistil";
			FH = false;
			++IndexC;
		}

		FPJ = PhenC; //Unfortunately this has to be below the Index in order to store properly
		F10H = FH;

	}	
	while (IndexC == 11) //Flower Scent
	{
		GenC = PK;
		//std::cout << FPJ << ". Here's the last phenotype.\n";

		if (GenC == 11)
		{
			PhenC = "Dank";
			FH = true;
			++IndexC;
		}
		if (GenC == 22)
		{
			PhenC = "Fruity";
			FH = true;
			++IndexC;
		}
		if (GenC == 33)
		{
			PhenC = "Floral";
			FH = true;
			++IndexC;
		}
		if (GenC == 12)
		{
			PhenC = "Earthy";
			FH = false;
			++IndexC;
		}
		if (GenC == 13)
		{
			PhenC = "Pine";
			FH = false;
			++IndexC;
		}
		if (GenC == 23)
		{
			PhenC = "Tropical";
			FH = false;
			++IndexC;
		}

		FPK = PhenC; //Unfortunately this has to be below the Index in order to store properly
		F11H = FH;

	}	
	while (IndexC == 12) //Fiber Density
	{
		GenC = PL;
		//std::cout << FPK << ". Here's the last phenotype.\n";

		if (GenC == 11)
		{
			PhenC = "Normal Fiber Density";
			FH = true;
			++IndexC;
		}
		if (GenC == 22)
		{
			PhenC = "Superior Fiber Density";
			FH = true;
			++IndexC;
		}
		if (GenC == 33)
		{
			PhenC = "Inferior Fiber Density";
			FH = true;
			++IndexC;
		}
		if (GenC == 12)
		{
			PhenC = "High Fiber Density";
			FH = false;
			++IndexC;
		}
		if (GenC == 13)
		{
			PhenC = "Low Fiber Density";
			FH = false;
			++IndexC;
		}
		if (GenC == 23)
		{
			PhenC = "Normal Fiber Density";
			FH = false;
			++IndexC;
		}

		FPL = PhenC; //Unfortunately this has to be below the Index in order to store properly
		F12H = FH;

	}	
	while (IndexC == 13) //Nitrous Intake
	{
		GenC = PM;
		//std::cout << FPL << ". Here's the last phenotype.\n";

		if (GenC == 11)
		{
			PhenC = "Normal Nitrous Intake";
			FH = true;
			++IndexC;
		}
		if (GenC == 22)
		{
			PhenC = "High Nitrous Intake";
			FH = true;
			++IndexC;
		}
		if (GenC == 33)
		{
			PhenC = "Low Nitrous Intake";
			FH = true;
			++IndexC;
		}
		if (GenC == 12)
		{
			PhenC = "Normal Nitrous Intake";
			FH = false;
			++IndexC;
		}
		if (GenC == 13)
		{
			PhenC = "Normal Nitrous Intake";
			FH = false;
			++IndexC;
		}
		if (GenC == 23)
		{
			PhenC = "Normal Nitrous Intake";
			FH = false;
			++IndexC;
		}

		FPM = PhenC; //Unfortunately this has to be below the Index in order to store properly
		F13H = FH;

	}	
	while (IndexC == 14) //Phosphorous Intake
	{
		GenC = PN;
		//std::cout << FPM << ". Here's the last phenotype.\n";

		if (GenC == 11)
		{
			PhenC = "Normal Phosphorus Intake";
			FH = true;
			++IndexC;
		}
		if (GenC == 22)
		{
			PhenC = "High Phosphorus Intake";
			FH = true;
			++IndexC;
		}
		if (GenC == 33)
		{
			PhenC = "Low Phosphorus Intake";
			FH = true;
			++IndexC;
		}
		if (GenC == 12)
		{
			PhenC = "Normal Phosphorus Intake";
			FH = false;
			++IndexC;
		}
		if (GenC == 13)
		{
			PhenC = "Normal Phosphorus Intake";
			FH = false;
			++IndexC;
		}
		if (GenC == 23)
		{
			PhenC = "Normal Phosphorous Intake";
			FH = false;
			++IndexC;
		}

		FPN = PhenC; //Unfortunately this has to be below the Index in order to store properly
		F14H = FH;

	}	
	while (IndexC == 15) //K Intake
	{
		GenC = PO;
		//std::cout << FPN << ". Here's the last phenotype.\n";

		if (GenC == 11)
		{
			PhenC = "Normal K Intake";
			FH = true;
			++IndexC;
		}
		if (GenC == 22)
		{
			PhenC = "High K Intake";
			FH = true;
			++IndexC;
		}
		if (GenC == 33)
		{
			PhenC = "Low K Intake";
			FH = true;
			++IndexC;
		}
		if (GenC == 12)
		{
			PhenC = "Normal K Intake";
			FH = false;
			++IndexC;
		}
		if (GenC == 13)
		{
			PhenC = "Normal K Intake";
			FH = false;
			++IndexC;
		}
		if (GenC == 23)
		{
			PhenC = "Normal K Intake";
			FH = false;
			++IndexC;
		}

		FPO = PhenC; //Unfortunately this has to be below the Index in order to store properly
		F15H = FH;

	}	
	while (IndexC == 16) //Apical Dominance
	{
		GenC = PP;
		//std::cout << FPO << ". Here's the last phenotype.\n";

		if (GenC == 11)
		{
			PhenC = "Average Height";
			FH = true;
			++IndexC;
		}
		if (GenC == 22)
		{
			PhenC = "Tall";
			FH = true;
			++IndexC;
		}
		if (GenC == 33)
		{
			PhenC = "Short";
			FH = true;
			++IndexC;
		}
		if (GenC == 12)
		{
			PhenC = "Average Height";
			FH = false;
			++IndexC;
		}
		if (GenC == 13)
		{
			PhenC = "Average Height";
			FH = false;
			++IndexC;
		}
		if (GenC == 23)
		{
			PhenC = "Average Height";
			FH = false;
			++IndexC;
		}

		FPP = PhenC; //Unfortunately this has to be below the Index in order to store properly
		F16H = FH;

	}	
	while (IndexC == 17) //Height
	{
		GenC = PQ;
		//std::cout << FPP << ". Here's the last phenotype.\n";

		if (GenC == 11)
		{
			PhenC = "Normal Apical Dominance";
			FH = true;
			++IndexC;
		}
		if (GenC == 22)
		{
			PhenC = "Strong Apical Dominance";
			FH = true;
			++IndexC;
		}
		if (GenC == 33)
		{
			PhenC = "Low Apical Dominance";
			FH = true;
			++IndexC;
		}
		if (GenC == 12)
		{
			PhenC = "Normal Apical Dominance";
			FH = false;
			++IndexC;
		}
		if (GenC == 13)
		{
			PhenC = "Normal Apical Dominance";
			FH = false;
			++IndexC;
		}
		if (GenC == 23)
		{
			PhenC = "Normal Apical Dominance";
			FH = false;
			++IndexC;
		}

		FPQ = PhenC; //Unfortunately this has to be below the Index in order to store properly
		F17H = FH;

	}	
	if (IndexC == 18)
	{
	Complete = true;
	}
	if (Complete == true) // Activate storage
	{
		file.open ("Sequence.txt"); // Opens the Genome.txt file
		if (!file)
		{
		std::cout << "Failed to open file" << std::endl;
		}
		while (file.good())
		{
			file << FPA << std::endl << FPB << std::endl << FPC << std::endl << FPD << std::endl << FPE << std::endl << FPF << std::endl << FPG << std::endl << FPH << std::endl << FPI << std::endl << FPJ << std::endl << FPK << std::endl << FPL << std::endl << FPM << std::endl << FPN << std::endl << FPO << std::endl << FPP << std::endl << FPQ << std::endl; file.close();
			Complete = false;
		}
	}


}

