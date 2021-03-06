/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "DADataElement.h"
#import "ASChangedCollectionLeaf.h"

@class NSArray, NSString, NSDate;

@interface ASContact : ASChangedCollectionLeaf <DADataElement> {
	void *_abRecord;	// 64 = 0x40
	NSDate *_anniversary;	// 68 = 0x44
	NSString *_assistantName;	// 72 = 0x48
	NSString *_assistantTelephoneNumber;	// 76 = 0x4c
	NSDate *_birthday;	// 80 = 0x50
	NSString *_body;	// 84 = 0x54
	int _bodySize;	// 88 = 0x58
	BOOL _bodyTruncated;	// 92 = 0x5c
	NSString *_business2TelephoneNumber;	// 96 = 0x60
	NSString *_businessAddressCity;	// 100 = 0x64
	NSString *_businessAddressCountry;	// 104 = 0x68
	NSString *_businessAddressPostalCode;	// 108 = 0x6c
	NSString *_businessAddressState;	// 112 = 0x70
	NSString *_businessAddressStreet;	// 116 = 0x74
	NSString *_businessFaxNumber;	// 120 = 0x78
	NSString *_businessTelephoneNumber;	// 124 = 0x7c
	NSString *_carTelephoneNumber;	// 128 = 0x80
	NSArray *_categories;	// 132 = 0x84
	NSArray *_children;	// 136 = 0x88
	NSString *_companyName;	// 140 = 0x8c
	NSString *_department;	// 144 = 0x90
	NSString *_email1Address;	// 148 = 0x94
	NSString *_email2Address;	// 152 = 0x98
	NSString *_email3Address;	// 156 = 0x9c
	NSString *_fileAs;	// 160 = 0xa0
	NSString *_firstName;	// 164 = 0xa4
	NSString *_home2TelephoneNumber;	// 168 = 0xa8
	NSString *_homeAddressCity;	// 172 = 0xac
	NSString *_homeAddressCountry;	// 176 = 0xb0
	NSString *_homeAddressPostalCode;	// 180 = 0xb4
	NSString *_homeAddressState;	// 184 = 0xb8
	NSString *_homeAddressStreet;	// 188 = 0xbc
	NSString *_homeFaxNumber;	// 192 = 0xc0
	NSString *_homeTelephoneNumber;	// 196 = 0xc4
	NSString *_jobTitle;	// 200 = 0xc8
	NSString *_lastName;	// 204 = 0xcc
	NSString *_middleName;	// 208 = 0xd0
	NSString *_mobileTelephoneNumber;	// 212 = 0xd4
	NSString *_officeLocation;	// 216 = 0xd8
	NSString *_otherAddressCity;	// 220 = 0xdc
	NSString *_otherAddressCountry;	// 224 = 0xe0
	NSString *_otherAddressPostalCode;	// 228 = 0xe4
	NSString *_otherAddressState;	// 232 = 0xe8
	NSString *_otherAddressStreet;	// 236 = 0xec
	NSString *_pagerNumber;	// 240 = 0xf0
	NSString *_picture;	// 244 = 0xf4
	NSString *_radioTelephoneNumber;	// 248 = 0xf8
	NSString *_spouse;	// 252 = 0xfc
	NSString *_suffix;	// 256 = 0x100
	NSString *_title;	// 260 = 0x104
	NSString *_webpage;	// 264 = 0x108
	NSString *_yomiCompanyName;	// 268 = 0x10c
	NSString *_yomiFirstName;	// 272 = 0x110
	NSString *_yomiLastName;	// 276 = 0x114
	NSString *_customerID;	// 280 = 0x118
	NSString *_governmentID;	// 284 = 0x11c
	NSString *_im1Address;	// 288 = 0x120
	NSString *_im2Address;	// 292 = 0x124
	NSString *_im3Address;	// 296 = 0x128
	NSString *_managerName;	// 300 = 0x12c
	NSString *_companyMainPhone;	// 304 = 0x130
	NSString *_accountName;	// 308 = 0x134
	NSString *_nickName;	// 312 = 0x138
	NSString *_mms;	// 316 = 0x13c
	int _fileAsAutoConstruction;	// 320 = 0x140
}
@property(retain) NSString *accountName;	// G=0x36c426dd; S=0x36c426f1; @synthesize=_accountName
@property(retain) NSDate *anniversary;	// G=0x36c41e6d; S=0x36c41e81; @synthesize=_anniversary
@property(retain) NSString *assistantName;	// G=0x36c41e91; S=0x36c41ea5; @synthesize=_assistantName
@property(retain) NSString *assistantTelephoneNumber;	// G=0x36c41eb5; S=0x36c41ec9; @synthesize=_assistantTelephoneNumber
@property(retain) NSDate *birthday;	// G=0x36c41ed9; S=0x36c41eed; @synthesize=_birthday
@property(retain, nonatomic) NSString *body;	// G=0x36c41efd; S=0x36c41c49; @synthesize=_body
@property(assign) int bodySize;	// G=0x36c41f0d; S=0x36c41f21; @synthesize=_bodySize
@property(assign) BOOL bodyTruncated;	// G=0x36c41f39; S=0x36c41f51; @synthesize=_bodyTruncated
@property(retain) NSString *business2TelephoneNumber;	// G=0x36c41f69; S=0x36c41f7d; @synthesize=_business2TelephoneNumber
@property(retain) NSString *businessAddressCity;	// G=0x36c41f8d; S=0x36c41fa1; @synthesize=_businessAddressCity
@property(retain) NSString *businessAddressCountry;	// G=0x36c41fb1; S=0x36c41fc5; @synthesize=_businessAddressCountry
@property(retain) NSString *businessAddressPostalCode;	// G=0x36c41fd5; S=0x36c41fe9; @synthesize=_businessAddressPostalCode
@property(retain) NSString *businessAddressState;	// G=0x36c41ff9; S=0x36c4200d; @synthesize=_businessAddressState
@property(retain) NSString *businessAddressStreet;	// G=0x36c4201d; S=0x36c42031; @synthesize=_businessAddressStreet
@property(retain) NSString *businessFaxNumber;	// G=0x36c42041; S=0x36c42055; @synthesize=_businessFaxNumber
@property(retain) NSString *businessTelephoneNumber;	// G=0x36c42065; S=0x36c42079; @synthesize=_businessTelephoneNumber
@property(retain) NSString *carTelephoneNumber;	// G=0x36c420d1; S=0x36c420e5; @synthesize=_carTelephoneNumber
@property(retain) NSArray *categories;	// G=0x36c42089; S=0x36c4209d; @synthesize=_categories
@property(retain) NSArray *children;	// G=0x36c420ad; S=0x36c420c1; @synthesize=_children
@property(retain) NSString *companyMainPhone;	// G=0x36c426b9; S=0x36c426cd; @synthesize=_companyMainPhone
@property(retain) NSString *companyName;	// G=0x36c420f5; S=0x36c42109; @synthesize=_companyName
@property(retain) NSString *customerID;	// G=0x36c425e1; S=0x36c425f5; @synthesize=_customerID
@property(retain) NSString *department;	// G=0x36c42119; S=0x36c4212d; @synthesize=_department
@property(retain) NSString *email1Address;	// G=0x36c4213d; S=0x36c42151; @synthesize=_email1Address
@property(retain) NSString *email2Address;	// G=0x36c42161; S=0x36c42175; @synthesize=_email2Address
@property(retain) NSString *email3Address;	// G=0x36c42185; S=0x36c42199; @synthesize=_email3Address
@property(retain) NSString *fileAs;	// G=0x36c421a9; S=0x36c421bd; @synthesize=_fileAs
@property(retain) NSString *firstName;	// G=0x36c421cd; S=0x36c421e1; @synthesize=_firstName
@property(retain) NSString *governmentID;	// G=0x36c42605; S=0x36c42619; @synthesize=_governmentID
@property(retain) NSString *home2TelephoneNumber;	// G=0x36c421f1; S=0x36c42205; @synthesize=_home2TelephoneNumber
@property(retain) NSString *homeAddressCity;	// G=0x36c42215; S=0x36c42229; @synthesize=_homeAddressCity
@property(retain) NSString *homeAddressCountry;	// G=0x36c42239; S=0x36c4224d; @synthesize=_homeAddressCountry
@property(retain) NSString *homeAddressPostalCode;	// G=0x36c4225d; S=0x36c42271; @synthesize=_homeAddressPostalCode
@property(retain) NSString *homeAddressState;	// G=0x36c42281; S=0x36c42295; @synthesize=_homeAddressState
@property(retain) NSString *homeAddressStreet;	// G=0x36c422a5; S=0x36c422b9; @synthesize=_homeAddressStreet
@property(retain) NSString *homeFaxNumber;	// G=0x36c422ed; S=0x36c42301; @synthesize=_homeFaxNumber
@property(retain) NSString *homeTelephoneNumber;	// G=0x36c422c9; S=0x36c422dd; @synthesize=_homeTelephoneNumber
@property(retain) NSString *im1Address;	// G=0x36c42629; S=0x36c4263d; @synthesize=_im1Address
@property(retain) NSString *im2Address;	// G=0x36c4264d; S=0x36c42661; @synthesize=_im2Address
@property(retain) NSString *im3Address;	// G=0x36c42671; S=0x36c42685; @synthesize=_im3Address
@property(retain) NSString *jobTitle;	// G=0x36c42311; S=0x36c42325; @synthesize=_jobTitle
@property(retain) NSString *lastName;	// G=0x36c42335; S=0x36c42349; @synthesize=_lastName
@property(retain) NSString *managerName;	// G=0x36c42695; S=0x36c426a9; @synthesize=_managerName
@property(retain) NSString *middleName;	// G=0x36c42359; S=0x36c4236d; @synthesize=_middleName
@property(retain) NSString *mms;	// G=0x36c42725; S=0x36c42739; @synthesize=_mms
@property(retain) NSString *mobileTelephoneNumber;	// G=0x36c4237d; S=0x36c42391; @synthesize=_mobileTelephoneNumber
@property(retain) NSString *nickName;	// G=0x36c42701; S=0x36c42715; @synthesize=_nickName
@property(retain) NSString *officeLocation;	// G=0x36c423a1; S=0x36c423b5; @synthesize=_officeLocation
@property(retain) NSString *otherAddressCity;	// G=0x36c423c5; S=0x36c423d9; @synthesize=_otherAddressCity
@property(retain) NSString *otherAddressCountry;	// G=0x36c423e9; S=0x36c423fd; @synthesize=_otherAddressCountry
@property(retain) NSString *otherAddressPostalCode;	// G=0x36c4240d; S=0x36c42421; @synthesize=_otherAddressPostalCode
@property(retain) NSString *otherAddressState;	// G=0x36c42431; S=0x36c42445; @synthesize=_otherAddressState
@property(retain) NSString *otherAddressStreet;	// G=0x36c42455; S=0x36c42469; @synthesize=_otherAddressStreet
@property(retain) NSString *pagerNumber;	// G=0x36c42479; S=0x36c4248d; @synthesize=_pagerNumber
@property(retain) NSString *picture;	// G=0x36c4249d; S=0x36c424b1; @synthesize=_picture
@property(retain) NSString *radioTelephoneNumber;	// G=0x36c424c1; S=0x36c424d5; @synthesize=_radioTelephoneNumber
@property(retain) NSString *spouse;	// G=0x36c424e5; S=0x36c424f9; @synthesize=_spouse
@property(retain) NSString *suffix;	// G=0x36c42509; S=0x36c4251d; @synthesize=_suffix
@property(retain) NSString *title;	// G=0x36c4252d; S=0x36c42541; @synthesize=_title
@property(retain) NSString *webpage;	// G=0x36c42551; S=0x36c42565; @synthesize=_webpage
@property(retain) NSString *yomiCompanyName;	// G=0x36c42575; S=0x36c42589; @synthesize=_yomiCompanyName
@property(retain) NSString *yomiFirstName;	// G=0x36c42599; S=0x36c425ad; @synthesize=_yomiFirstName
@property(retain) NSString *yomiLastName;	// G=0x36c425bd; S=0x36c425d1; @synthesize=_yomiLastName
+ (void)_setSystemTimeZoneForUnitTests:(id)unitTests;	// 0x36c394e5
+ (BOOL)acceptsTopLevelLeaves;	// 0x36c39341
+ (id)asParseRules;	// 0x36c395f1
+ (id)contactWithABRecord:(void *)abrecord serverID:(id)anId;	// 0x36c3be0d
+ (BOOL)frontingBasicTypes;	// 0x36c3943d
+ (BOOL)notifyOfUnknownTokens;	// 0x36c39491
+ (BOOL)parsingLeafNode;	// 0x36c39395
+ (BOOL)parsingWithSubItems;	// 0x36c393e9
- (id)initWithABRecord:(void *)abrecord serverID:(id)anId;	// 0x36c3bd99
- (id)initWithCoder:(id)coder;	// 0x36c41cb5
- (void)_detectFileAsAutoConstruction;	// 0x36c3ab55
- (void)_loadAttributesFromABRecord:(void *)abrecord;	// 0x36c3b899
- (void)_reconstructFileAsField;	// 0x36c3b3a9
- (BOOL)_saveDatesToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x36c3be4d
- (BOOL)_saveEmailsToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x36c3d041
- (BOOL)_saveExternalRepToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties storeExternalRep:(BOOL)rep;	// 0x36c3d939
- (BOOL)_saveIMsToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x36c3d505
- (BOOL)_savePhoneNumbersToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x36c3c20d
- (BOOL)_saveRelatedNamesToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x36c3bfd5
- (BOOL)_saveStreetAddressesToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x36c3ca75
- (BOOL)_saveURLsToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x36c3d399
- (BOOL)_setDatesWithExistingRecord:(void *)existingRecord;	// 0x36c39b31
- (BOOL)_setEmailsWithExistingRecord:(void *)existingRecord;	// 0x36c3a4ad
- (BOOL)_setExternalRepWithExistingRecord:(void *)existingRecord;	// 0x36c3a731
- (BOOL)_setIMsWithExistingRecord:(void *)existingRecord;	// 0x36c3a63d
- (void)_setImageOnContactFromPerson:(void *)person;	// 0x36c39a79
- (BOOL)_setPhoneNumbersWithExistingRecord:(void *)existingRecord;	// 0x36c39d51
- (BOOL)_setRelatedNamesWithExistingRecord:(void *)existingRecord;	// 0x36c39c19
- (BOOL)_setStreetAddressesWithExistingRecord:(void *)existingRecord;	// 0x36c3a125
- (BOOL)_setURLsWithExistingRecord:(void *)existingRecord;	// 0x36c3a56d
- (id)_transformedDateForABFramework:(id)abframework;	// 0x36c3951d
- (id)_transformedDateForActiveSync:(id)activeSync;	// 0x36c39559
// declared property getter: - (id)accountName;	// 0x36c426dd
// declared property getter: - (id)anniversary;	// 0x36c41e6d
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x36c3e955
// declared property getter: - (id)assistantName;	// 0x36c41e91
// declared property getter: - (id)assistantTelephoneNumber;	// 0x36c41eb5
// declared property getter: - (id)birthday;	// 0x36c41ed9
// declared property getter: - (id)body;	// 0x36c41efd
// declared property getter: - (int)bodySize;	// 0x36c41f0d
// declared property getter: - (BOOL)bodyTruncated;	// 0x36c41f39
// declared property getter: - (id)business2TelephoneNumber;	// 0x36c41f69
// declared property getter: - (id)businessAddressCity;	// 0x36c41f8d
// declared property getter: - (id)businessAddressCountry;	// 0x36c41fb1
// declared property getter: - (id)businessAddressPostalCode;	// 0x36c41fd5
// declared property getter: - (id)businessAddressState;	// 0x36c41ff9
// declared property getter: - (id)businessAddressStreet;	// 0x36c4201d
// declared property getter: - (id)businessFaxNumber;	// 0x36c42041
// declared property getter: - (id)businessTelephoneNumber;	// 0x36c42065
// declared property getter: - (id)carTelephoneNumber;	// 0x36c420d1
// declared property getter: - (id)categories;	// 0x36c42089
// declared property getter: - (id)children;	// 0x36c420ad
// declared property getter: - (id)companyMainPhone;	// 0x36c426b9
// declared property getter: - (id)companyName;	// 0x36c420f5
// declared property getter: - (id)customerID;	// 0x36c425e1
- (int)dataclass;	// 0x36c39a75
- (void)dealloc;	// 0x36c414a1
- (BOOL)deleteFromAddressBook;	// 0x36c3e889
- (BOOL)deleteFromContainer:(void *)container;	// 0x36c41e55
// declared property getter: - (id)department;	// 0x36c42119
- (id)description;	// 0x36c41ab1
// declared property getter: - (id)email1Address;	// 0x36c4213d
// declared property getter: - (id)email2Address;	// 0x36c42161
// declared property getter: - (id)email3Address;	// 0x36c42185
- (void)encodeWithCoder:(id)coder;	// 0x36c41d35
// declared property getter: - (id)fileAs;	// 0x36c421a9
// declared property getter: - (id)firstName;	// 0x36c421cd
// declared property getter: - (id)governmentID;	// 0x36c42605
// declared property getter: - (id)home2TelephoneNumber;	// 0x36c421f1
// declared property getter: - (id)homeAddressCity;	// 0x36c42215
// declared property getter: - (id)homeAddressCountry;	// 0x36c42239
// declared property getter: - (id)homeAddressPostalCode;	// 0x36c4225d
// declared property getter: - (id)homeAddressState;	// 0x36c42281
// declared property getter: - (id)homeAddressStreet;	// 0x36c422a5
// declared property getter: - (id)homeFaxNumber;	// 0x36c422ed
// declared property getter: - (id)homeTelephoneNumber;	// 0x36c422c9
// declared property getter: - (id)im1Address;	// 0x36c42629
// declared property getter: - (id)im2Address;	// 0x36c4264d
// declared property getter: - (id)im3Address;	// 0x36c42671
// declared property getter: - (id)jobTitle;	// 0x36c42311
// declared property getter: - (id)lastName;	// 0x36c42335
- (BOOL)loadABRecord;	// 0x36c3e64d
- (void)loadClientIDs;	// 0x36c3e829
- (BOOL)loadLocalItemWithAccount:(id)account;	// 0x36c41e25
// declared property getter: - (id)managerName;	// 0x36c42695
// declared property getter: - (id)middleName;	// 0x36c42359
// declared property getter: - (id)mms;	// 0x36c42725
// declared property getter: - (id)mobileTelephoneNumber;	// 0x36c4237d
// declared property getter: - (id)nickName;	// 0x36c42701
// declared property getter: - (id)officeLocation;	// 0x36c423a1
// declared property getter: - (id)otherAddressCity;	// 0x36c423c5
// declared property getter: - (id)otherAddressCountry;	// 0x36c423e9
// declared property getter: - (id)otherAddressPostalCode;	// 0x36c4240d
// declared property getter: - (id)otherAddressState;	// 0x36c42431
// declared property getter: - (id)otherAddressStreet;	// 0x36c42455
// declared property getter: - (id)pagerNumber;	// 0x36c42479
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x36c419b9
// declared property getter: - (id)picture;	// 0x36c4249d
- (void)postProcessApplicationData;	// 0x36c3f9f1
// declared property getter: - (id)radioTelephoneNumber;	// 0x36c424c1
- (BOOL)saveServerIDToContact;	// 0x36c3e7e5
- (BOOL)saveServerIDToExistingItem;	// 0x36c41e3d
- (BOOL)saveToAddressBookWithExistingRecord:(void *)existingRecord inSource:(void *)source shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge storeExternalRep:(BOOL)rep;	// 0x36c3de39
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x36c41db1
- (void)setABRecord:(void *)record;	// 0x36c3e601
// declared property setter: - (void)setAccountName:(id)name;	// 0x36c426f1
// declared property setter: - (void)setAnniversary:(id)anniversary;	// 0x36c41e81
// declared property setter: - (void)setAssistantName:(id)name;	// 0x36c41ea5
// declared property setter: - (void)setAssistantTelephoneNumber:(id)number;	// 0x36c41ec9
// declared property setter: - (void)setBirthday:(id)birthday;	// 0x36c41eed
// declared property setter: - (void)setBody:(id)body;	// 0x36c41c49
// declared property setter: - (void)setBodySize:(int)size;	// 0x36c41f21
- (void)setBodySizeNumber:(id)number;	// 0x36c41a51
// declared property setter: - (void)setBodyTruncated:(BOOL)truncated;	// 0x36c41f51
- (void)setBodyTruncatedNumber:(id)number;	// 0x36c41a81
// declared property setter: - (void)setBusiness2TelephoneNumber:(id)number;	// 0x36c41f7d
// declared property setter: - (void)setBusinessAddressCity:(id)city;	// 0x36c41fa1
// declared property setter: - (void)setBusinessAddressCountry:(id)country;	// 0x36c41fc5
// declared property setter: - (void)setBusinessAddressPostalCode:(id)code;	// 0x36c41fe9
// declared property setter: - (void)setBusinessAddressState:(id)state;	// 0x36c4200d
// declared property setter: - (void)setBusinessAddressStreet:(id)street;	// 0x36c42031
// declared property setter: - (void)setBusinessFaxNumber:(id)number;	// 0x36c42055
// declared property setter: - (void)setBusinessTelephoneNumber:(id)number;	// 0x36c42079
// declared property setter: - (void)setCarTelephoneNumber:(id)number;	// 0x36c420e5
// declared property setter: - (void)setCategories:(id)categories;	// 0x36c4209d
// declared property setter: - (void)setChildren:(id)children;	// 0x36c420c1
// declared property setter: - (void)setCompanyMainPhone:(id)phone;	// 0x36c426cd
// declared property setter: - (void)setCompanyName:(id)name;	// 0x36c42109
// declared property setter: - (void)setCustomerID:(id)anId;	// 0x36c425f5
// declared property setter: - (void)setDepartment:(id)department;	// 0x36c4212d
// declared property setter: - (void)setEmail1Address:(id)address;	// 0x36c42151
// declared property setter: - (void)setEmail2Address:(id)address;	// 0x36c42175
// declared property setter: - (void)setEmail3Address:(id)address;	// 0x36c42199
- (void)setEmailFromAppData:(int)appData setter:(SEL)setter;	// 0x36c3f969
// declared property setter: - (void)setFileAs:(id)as;	// 0x36c421bd
// declared property setter: - (void)setFirstName:(id)name;	// 0x36c421e1
// declared property setter: - (void)setGovernmentID:(id)anId;	// 0x36c42619
// declared property setter: - (void)setHome2TelephoneNumber:(id)number;	// 0x36c42205
// declared property setter: - (void)setHomeAddressCity:(id)city;	// 0x36c42229
// declared property setter: - (void)setHomeAddressCountry:(id)country;	// 0x36c4224d
// declared property setter: - (void)setHomeAddressPostalCode:(id)code;	// 0x36c42271
// declared property setter: - (void)setHomeAddressState:(id)state;	// 0x36c42295
// declared property setter: - (void)setHomeAddressStreet:(id)street;	// 0x36c422b9
// declared property setter: - (void)setHomeFaxNumber:(id)number;	// 0x36c42301
// declared property setter: - (void)setHomeTelephoneNumber:(id)number;	// 0x36c422dd
// declared property setter: - (void)setIm1Address:(id)address;	// 0x36c4263d
// declared property setter: - (void)setIm2Address:(id)address;	// 0x36c42661
// declared property setter: - (void)setIm3Address:(id)address;	// 0x36c42685
// declared property setter: - (void)setJobTitle:(id)title;	// 0x36c42325
// declared property setter: - (void)setLastName:(id)name;	// 0x36c42349
- (void)setLocalItem:(void *)item;	// 0x36c41e15
// declared property setter: - (void)setManagerName:(id)name;	// 0x36c426a9
// declared property setter: - (void)setMiddleName:(id)name;	// 0x36c4236d
// declared property setter: - (void)setMms:(id)mms;	// 0x36c42739
// declared property setter: - (void)setMobileTelephoneNumber:(id)number;	// 0x36c42391
// declared property setter: - (void)setNickName:(id)name;	// 0x36c42715
// declared property setter: - (void)setOfficeLocation:(id)location;	// 0x36c423b5
// declared property setter: - (void)setOtherAddressCity:(id)city;	// 0x36c423d9
// declared property setter: - (void)setOtherAddressCountry:(id)country;	// 0x36c423fd
// declared property setter: - (void)setOtherAddressPostalCode:(id)code;	// 0x36c42421
// declared property setter: - (void)setOtherAddressState:(id)state;	// 0x36c42445
// declared property setter: - (void)setOtherAddressStreet:(id)street;	// 0x36c42469
// declared property setter: - (void)setPagerNumber:(id)number;	// 0x36c4248d
// declared property setter: - (void)setPicture:(id)picture;	// 0x36c424b1
// declared property setter: - (void)setRadioTelephoneNumber:(id)number;	// 0x36c424d5
// declared property setter: - (void)setSpouse:(id)spouse;	// 0x36c424f9
// declared property setter: - (void)setSuffix:(id)suffix;	// 0x36c4251d
// declared property setter: - (void)setTitle:(id)title;	// 0x36c42541
// declared property setter: - (void)setWebpage:(id)webpage;	// 0x36c42565
// declared property setter: - (void)setYomiCompanyName:(id)name;	// 0x36c42589
// declared property setter: - (void)setYomiFirstName:(id)name;	// 0x36c425ad
// declared property setter: - (void)setYomiLastName:(id)name;	// 0x36c425d1
// declared property getter: - (id)spouse;	// 0x36c424e5
// declared property getter: - (id)suffix;	// 0x36c42509
// declared property getter: - (id)title;	// 0x36c4252d
// declared property getter: - (id)webpage;	// 0x36c42551
// declared property getter: - (id)yomiCompanyName;	// 0x36c42575
// declared property getter: - (id)yomiFirstName;	// 0x36c42599
// declared property getter: - (id)yomiLastName;	// 0x36c425bd
@end

