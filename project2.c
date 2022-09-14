#define BUFFER_LEN 1024
#define MAX_fname_LEN 32
#define MAX_lname_LEN 32
#define MAX_streetname_LEN 32
#define MAX_cname_LEN 32
#define MAX_statename_LEN 32
#define MAX_ICDname_LEN [4][10]

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Buffers func
void clearBuffer(char *buffer)
{
    memset(buffer, '\0', BUFFER_LEN);
}

int GetValidatedString(size_t stringMax, char *buffer)
{
    int retVal = 1;
    fgets(buffer, BUFFER_LEN, stdin);
    if ((strlen(buffer) <= 0) || (strlen(buffer) > stringMax))
    {
        printf("The input length must be between 0 and %d\n", stringMax);
        clearBuffer(buffer);
        retVal = 0;
    }

    return retVal;
}

enum Phonetype
{
    none = 0,
    home = 1,
    cell = 2,
    work = 3

} phonetype;

enum StateEnum
{

    NONE = 0,
    AL = 1,
    AK = 2,
    AZ = 3,
    AR = 4,
    CA = 5,
    CO = 6,
    CT = 7,
    DE = 8,
    FL = 9,
    GA = 10,
    HI = 11,
    ID = 12,
    IL = 13,
    IN = 14,
    IA = 15,
    KS = 16,
    KY = 17,
    LA = 18,
    ME = 19,
    MD = 20,
    MA = 21,
    MI = 22,
    MN = 23,
    MS = 24,
    MO = 25,
    MT = 26,
    NE = 27,
    NV = 28,
    NH = 29,
    NJ = 30,
    NM = 31,
    NY = 32,
    NC = 33,
    ND = 34,
    OH = 35,
    OK = 36,
    OR = 37,
    PA = 38,
    RI = 39,
    SC = 40,
    SD = 41,
    TN = 42,
    TX = 43,
    UT = 44,
    VT = 45,
    VA = 46,
    WA = 47,
    WV = 48,
    WI = 49,
    WY = 50,
    DC = 51,
    KA = 52

} stateEnum;

bool stateIdentifier(char sc1, char sc2)
{
    switch (sc1)
    {
    case 'A':
        switch (sc2)
        {
        case 'K': // looking for capital letter
            // case 'k':  //fall through, incase if lowercase
            stateEnum = AK;
            break;
        case 'L':
            // case 'l':
            stateEnum = AL;
            break;
        case 'R':
            // case 'r':
            stateEnum = AR;
            break;
        case 'Z':
            // case 'z':
            stateEnum = AZ;
            break;
        default:
            printf("Error please try again. ");
            stateEnum = NONE;
            break;
            // validState = false;
        };
        break;

    case 'C':
        switch (sc2)
        {
        case 'A':
            stateEnum = CA;
            break;
        case 'O':
            stateEnum = CO;
            break;
        case 'T':
            stateEnum = CT;
            break;
        default:
            stateEnum = NONE;
            break;
            // validState = false;
        };
        break;

    case 'D':
        switch (sc2)
        {
        case 'E':
            stateEnum = DE;
            break;
        case 'C':
            stateEnum = DC;
            break;
        default:
            stateEnum = NONE;
            break;
            // validState = false;
        };
        break;

    case 'F':
        switch (sc2)
        {
        case 'L':
            stateEnum = FL;
            break;
        default:
            stateEnum = NONE;
            break;
            // validState = false;
        };
        break;

    case 'G':
        switch (sc2)
        {
        case 'A':
            stateEnum = GA;
            break;
        default:
            stateEnum = NONE;
            break;
            // validState = false;
        };
        break;

    case 'H':
        switch (sc2)
        {
        case 'I':
            stateEnum = HI;
            break;
        default:
            stateEnum = NONE;
            break;
            // validState = false;
        };
        break;

    case 'I':
        switch (sc2)
        {
        case 'D':
            stateEnum = ID;
            break;
        case 'L':
            stateEnum = IL;
        case 'N':
            break;
            stateEnum = IN;
        case 'A':
            stateEnum = IA;
            break;
        default:
            stateEnum = NONE;
            break;
            // validState = false;
        };
        break;

    case 'K':
        switch (sc2)
        {
        case 'A':
            stateEnum = KA;
            break;
        case 'Y':
            stateEnum = KY;
            break;
        default:
            stateEnum = NONE;
            break;
            // validState = false;
        };
        break;

    case 'L':
        switch (sc2)
        {
        case 'A':
            stateEnum = LA;
            break;
        default:
            stateEnum = NONE;
            break;
            // validState = false;
        };
        break;

    case 'M':
        switch (sc2)
        {
        case 'E':
            stateEnum = ME;
            break;
        case 'D':
            stateEnum = MD;
            break;
        case 'A':
            stateEnum = MA;
            break;
        case 'I':
            stateEnum = MI;
            break;
        case 'N':
            stateEnum = MN;
            break;
        case 'S':
            stateEnum = MS;
            break;
        case 'O':
            stateEnum = MO;
            break;
        case 'T':
            stateEnum = MT;
            break;
        default:
            stateEnum = NONE;
            break;
            // validState = false;
        };
        break;

    case 'N':
        switch (sc2)
        {
        case 'E':
            stateEnum = NE;
            break;
        case 'V':
            stateEnum = NV;
            break;
        case 'H':
            stateEnum = NH;
            break;
        case 'J':
            stateEnum = NJ;
            break;
        case 'M':
            stateEnum = NM;
            break;
        case 'Y':
            stateEnum = NY;
            break;
        case 'C':
            stateEnum = NC;
            break;
        case 'D':
            stateEnum = ND;
            break;
        default:
            stateEnum = NONE;
            break;
            // validState = false;
        };
        break;

    case 'O':
        switch (sc2)
        {
        case 'H':
            stateEnum = OH;
            break;
        case 'K':
            stateEnum = OK;
            break;
        case 'R':
            stateEnum = OR;
            break;
        default:
            stateEnum = NONE;
            break;
            // validState = false;
        };
        break;

    case 'P':
        switch (sc2)
        {
        case 'A':
            stateEnum = PA;
            break;
        default:
            stateEnum = NONE;
            break;
            // validState = false;
        };
        break;

    case 'R':
        switch (sc2)
        {
        case 'I':
            stateEnum = RI;
            break;
        default:
            stateEnum = NONE;
            break;
            // validState = false;
        };
        break;

    case 'S':
        switch (sc2)
        {
        case 'C':
            stateEnum = SC;
            break;
        case 'D':
            stateEnum = SD;
            break;
        default:
            stateEnum = NONE;
            break;
            // validState = false;
        };
        break;

    case 'T':
        switch (sc2)
        {
        case 'N':
            stateEnum = TN;
            break;
        case 'X':
            stateEnum = TX;
            break;
        default:
            stateEnum = NONE;
            break;
            // validState = false;
        };
        break;

    case 'U':
        switch (sc2)
        {
        case 'T':
            stateEnum = UT;
            break;
        default:
            stateEnum = NONE;
            break;
            // validState = false;
        };
        break;

    case 'V':
        switch (sc2)
        {
        case 'T':
            stateEnum = VT;
            break;
        case 'A':
            stateEnum = VA;
            break;
        default:
            stateEnum = NONE;
            break;
            // validState = false;
        };
        break;

    case 'W':
        switch (sc2)
        {
        case 'A':
            stateEnum = WA;
            break;
        case 'V':
            stateEnum = WV;
            break;
        case 'I':
            stateEnum = WI;
            break;
        case 'Y':
            stateEnum = WY;
            break;
        default:
            stateEnum = NONE;
            break;
            // validState = false;
        };
        if (stateEnum != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if (stateEnum != 0)
    {
        return true;
    }
    else
    {
        printf("Error, please execute program again.");
        return false;
    }
}

char ICD10(char ICD[4][10])
{

    bool hasOtherCode = false;
    char cOrN;
    int i;
    do
    {
        printf("Enter the patient ICD code ");
        scanf("%[^\n]s", ICD[i]);
        scanf("%c");
        printf(ICD[i]);
        printf("Do you have another ICD code? (Y/N): ");
        hasOtherCode = true;

    } while (!hasOtherCode);
    return ICD[4][10];
}

int main()
{
    char va2 = 0;
    int check = 1;
    check = 0;

    // fname

    while (check != 1)
    {
        BUFFER_LEN[0] = '\0';
        scanf("%s", BUFFER_LEN);
        printf("\n");
        getchar();
        check = FNCHECK(BUFFER_LEN);
    }
    va2 = strlen(BUFFER_LEN);
    char *fname = (char *)malloc(va2 * sizeof(char));
    strcpy(fname, BUFFER_LEN);

    char fname;
    char *fname[MAX_fname_LEN];
    printf("\nEnter your first name: ");
    scanf("%s", MAX_fname_LEN);
    // printf("Your first name is the following: %s\n", firstname);

    strcpy(fname, MAX_fname_LEN);
    printf("%s", &fname);
    free(fname);

    // lname

    while (check != 1)
    {
        BUFFER_LEN[0] = '\0';
        scanf("%s", BUFFER_LEN);
        printf("\n");
        getchar();
        check = FNCHECK(BUFFER_LEN);
    }
    va2 = strlen(BUFFER_LEN);
    char *lname = (char *)malloc(va2 * sizeof(char));
    strcpy(lname, BUFFER_LEN);

    char lname;
    char *lname[MAX_lname_LEN];
    printf("\nEnter your last name: ");
    scanf("%s", MAX_lname_LEN);
    char *arr = NULL;
    // printf("Your last name is the following: %s\n", lastname);

    strcpy(lname, MAX_lname_LEN);
    printf("%s", &lname);
    free(lname);

    // sname

    while (check != 1)
    {
        BUFFER_LEN[0] = '\0';
        scanf("%s", BUFFER_LEN);
        printf("\n");
        getchar();
        check = FNCHECK(BUFFER_LEN);
    }
    va2 = strlen(BUFFER_LEN);
    char *sname = (char *)malloc(va2 * sizeof(char));
    strcpy(sname, BUFFER_LEN);

    char sname;
    char *sname[MAX_streetname_LEN];
    printf("\nEnter your address: ");
    scanf("%s", MAX_streetname_LEN);
    char *arr = NULL;
    // printf("Your address is the following: %s\n", address);

    strcpy(sname, MAX_streetname_LEN);
    printf("%s", &sname);
    free(sname);

    // zipcode

    unsigned int zipcode;
    printf("\nEnter your zipcode: ");
    scanf("%u", &zipcode);
    // printf("Your zipcode is the following: %u\n", &zipcode);

    unsigned int plus4;
    printf("\nEnter your zipcode +4: ");
    scanf("%u", plus4);
    // printf("Your plusfour in addition to your zipcode is the following: %u\n", plus4);

    // cname

    while (check != 1)
    {
        BUFFER_LEN[0] = '\0';
        scanf("%s", BUFFER_LEN);
        printf("\n");
        getchar();
        check = FNCHECK(BUFFER_LEN);
    }
    va2 = strlen(BUFFER_LEN);
    char *cname = (char *)malloc(va2 * sizeof(char));
    strcpy(cname, BUFFER_LEN);

    char cname;
    char *cname[MAX_cname_LEN];
    printf("\nEnter your city: ");
    scanf("%s", MAX_cname_LEN);
    char *arr = NULL;
    // printf("Your address is the following: %s\n", city);

    strcpy(cname, MAX_cname_LEN);
    printf("%s", &cname);
    free(cname);

    // stname

    while (check != 1)
    {
        BUFFER_LEN[0] = '\0';
        scanf("%s", BUFFER_LEN);
        printf("\n");
        getchar();
        check = FNCHECK(BUFFER_LEN);
    }
    va2 = strlen(BUFFER_LEN);
    char *stname = (char *)malloc(va2 * sizeof(char));
    strcpy(stname, BUFFER_LEN);

    char stname;
    char *stname[MAX_statename_LEN];
    printf("\nEnter your state: ");
    scanf("%s", MAX_statename_LEN);
    char *arr = NULL;
    // printf("Your address is the following: %s\n", state);

    strcpy(stname, MAX_statename_LEN);
    printf("%s", &stname);
    free(stname);

    bool stateIdentifier(char sc1, char sc2);

    char phonenumber[10];
    printf("\nEnter your phone number: ");
    scanf("%s", phonenumber);
    // printf("Your phone number is the following: %d\n", phonenumber);

    printf("Enter your phone type: ");
    scanf("%s", phonetype);
    // printf("Your phone type is the following: %s\n", phonetype);

    char ICDname;
    char *ICDname MAX_ICDname_LEN;
    printf("Enter your ICD code: ");
    scanf("%d", [*ICDname MAX_ICDname_LEN]);
    ICD10([*ICDname MAX_ICDname_LEN]);
    // printf("Your ICD code is the following: %s\n\n\n", ICD);

    strcpy(ICDname, MAX_ICDname_LEN);
    printf("%s", &ICDname);
    free(ICDname);

    printf("Your first name is the following: %s\n", MAX_fname_LEN);
    printf("Your last name is the following: %s\n", MAX_fname_LEN);
    printf("Your address is the following: %s\n", MAX_streetname_LEN);
    printf("Your zipcode is the following: %u\n", &zipcode);
    printf("Your plusfour in addition to your zipcode is the following: %u\n", plus4);
    printf("Your address is the following: %s\n", MAX_cname_LEN);
    printf("Your address is the following: %s\n", MAX_statename_LEN);
    printf("Your phone number is the following: %d\n", phonenumber);
    printf("Your phone type is the following: %s\n", phonetype);
    printf("Your ICD code is the following: %d\n\n\n", [*ICDname MAX_ICDname_LEN]);

    return 0;
}
