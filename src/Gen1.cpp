//Library inclusions
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <include/Functions/generate.h>
#include <include/Functions/window.h>


//Declaring P1 Genotype
// int P1A1, P1A2, P1B1, P1B2, P1C1, P1C2, P1D1, P1D2, P1E1, P1E2, P1F1, P1F2, P1G1, P1G2, P1H1, P1H2, P1I1, P1I2, P1J1, P1J2, P1K1, P1K2, P1K3, P1L1, P1L2, P1M1, P1M2, P1N1, P1N2, P1O1, P1O2, P1P1, P1P2, P1Q1, P1Q2, P1R1, P1R2;
//Declaring P2 Genotype
// int P2A1, P2A2, P2B1, P2B2, P2C1, P2C2, P2D1, P2D2, P2E1, P2E2, P2F1, P2F2, P2G1, P2G2, P2H1, P2H2, P2I1, P2I2, P2J1, P2J2, P2K1, P2K2, P2K3, P2L1, P2L2, P2M1, P2M2, P2N1, P2N2, P2O1, P2O2, P2P1, P2P2, P2Q1, P2Q2, P2R1, P2R2;
//Declaring placeholder Genotype
// int DA1, DA2, DB1, DB2, DC1, DC2, DD1, DD2, DE1, DE2, DF1, DF2, DG1, DG2, DH1, DH2, DI1, DI2, DJ1, DJ2, DK1, DK2, DK3, DL1, DL2, DM1, DM2, DN1, DN2, DO1, DO2, DP1, DP2, DQ1, DQ2, DR1, DR2;



//Important global variables relating to Main
int GeneToggle = 0;
std::string String;
bool IndexToggle;
std::ifstream Phenotype;

int main()
{
   // Sequenced = GenotypeSequence(); //Calling Genotype Sequencer

	Window();
	while (Window() > 0)
	{
		
	}
    //Welcome code
    std::cout << "Welcome! We're just getting started, please enjoy what we have to offer!\n";
    std::cout << "Would you like to see a randomly generated genotype? \nUse 1 as \"yes\" and 0 as \"No\"\n"; std::cin >> GeneToggle;

    if (GeneToggle == 1)
    {
        GeneGenerator(); //Run Gene Generator
    }

    if (GeneGenerator() == true)//Gene Generator completion
    {
        GeneToggle = 0; //Reset Gene Generator
		std::string String;

        // Terminal Output Code
		// std::cout << "Gene Generation Complete\n";
		
        GenotypeSequence(); //Run Genotype Sequencer
	}

    if (GenotypeSequence() == true) //Recieve Genotype
    {
		// Terminal Output Code
		// std::cout << "Reading Complete\n";
		IndexToggle = true;
    }

	if(IndexToggle = true);
	{
		Index();
		Phenotype.open ("Sequence.txt"); // Opens the Genome.txt file
		if (!Phenotype)
		{
		std::cout << "Failed to open file" << std::endl;
		}
		while (std::getline (Phenotype, String)) // while there are lines to assign to String, run
		{
			std::cout << String << std::endl; // Read String to terminal
		}
		Phenotype.close();


	    return 0;
	}	
}
