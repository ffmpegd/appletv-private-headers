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
@property(retain) NSString *accountName;	// G=0x309775ad; S=0x309775c1; @synthesize=_accountName
@property(retain) NSDate *anniversary;	// G=0x30976d3d; S=0x30976d51; @synthesize=_anniversary
@property(retain) NSString *assistantName;	// G=0x30976d61; S=0x30976d75; @synthesize=_assistantName
@property(retain) NSString *assistantTelephoneNumber;	// G=0x30976d85; S=0x30976d99; @synthesize=_assistantTelephoneNumber
@property(retain) NSDate *birthday;	// G=0x30976da9; S=0x30976dbd; @synthesize=_birthday
@property(retain, nonatomic) NSString *body;	// G=0x30976dcd; S=0x30976b19; @synthesize=_body
@property(assign) int bodySize;	// G=0x30976ddd; S=0x30976df1; @synthesize=_bodySize
@property(assign) BOOL bodyTruncated;	// G=0x30976e09; S=0x30976e21; @synthesize=_bodyTruncated
@property(retain) NSString *business2TelephoneNumber;	// G=0x30976e39; S=0x30976e4d; @synthesize=_business2TelephoneNumber
@property(retain) NSString *businessAddressCity;	// G=0x30976e5d; S=0x30976e71; @synthesize=_businessAddressCity
@property(retain) NSString *businessAddressCountry;	// G=0x30976e81; S=0x30976e95; @synthesize=_businessAddressCountry
@property(retain) NSString *businessAddressPostalCode;	// G=0x30976ea5; S=0x30976eb9; @synthesize=_businessAddressPostalCode
@property(retain) NSString *businessAddressState;	// G=0x30976ec9; S=0x30976edd; @synthesize=_businessAddressState
@property(retain) NSString *businessAddressStreet;	// G=0x30976eed; S=0x30976f01; @synthesize=_businessAddressStreet
@property(retain) NSString *businessFaxNumber;	// G=0x30976f11; S=0x30976f25; @synthesize=_businessFaxNumber
@property(retain) NSString *businessTelephoneNumber;	// G=0x30976f35; S=0x30976f49; @synthesize=_businessTelephoneNumber
@property(retain) NSString *carTelephoneNumber;	// G=0x30976fa1; S=0x30976fb5; @synthesize=_carTelephoneNumber
@property(retain) NSArray *categories;	// G=0x30976f59; S=0x30976f6d; @synthesize=_categories
@property(retain) NSArray *children;	// G=0x30976f7d; S=0x30976f91; @synthesize=_children
@property(retain) NSString *companyMainPhone;	// G=0x30977589; S=0x3097759d; @synthesize=_companyMainPhone
@property(retain) NSString *companyName;	// G=0x30976fc5; S=0x30976fd9; @synthesize=_companyName
@property(retain) NSString *customerID;	// G=0x309774b1; S=0x309774c5; @synthesize=_customerID
@property(retain) NSString *department;	// G=0x30976fe9; S=0x30976ffd; @synthesize=_department
@property(retain) NSString *email1Address;	// G=0x3097700d; S=0x30977021; @synthesize=_email1Address
@property(retain) NSString *email2Address;	// G=0x30977031; S=0x30977045; @synthesize=_email2Address
@property(retain) NSString *email3Address;	// G=0x30977055; S=0x30977069; @synthesize=_email3Address
@property(retain) NSString *fileAs;	// G=0x30977079; S=0x3097708d; @synthesize=_fileAs
@property(retain) NSString *firstName;	// G=0x3097709d; S=0x309770b1; @synthesize=_firstName
@property(retain) NSString *governmentID;	// G=0x309774d5; S=0x309774e9; @synthesize=_governmentID
@property(retain) NSString *home2TelephoneNumber;	// G=0x309770c1; S=0x309770d5; @synthesize=_home2TelephoneNumber
@property(retain) NSString *homeAddressCity;	// G=0x309770e5; S=0x309770f9; @synthesize=_homeAddressCity
@property(retain) NSString *homeAddressCountry;	// G=0x30977109; S=0x3097711d; @synthesize=_homeAddressCountry
@property(retain) NSString *homeAddressPostalCode;	// G=0x3097712d; S=0x30977141; @synthesize=_homeAddressPostalCode
@property(retain) NSString *homeAddressState;	// G=0x30977151; S=0x30977165; @synthesize=_homeAddressState
@property(retain) NSString *homeAddressStreet;	// G=0x30977175; S=0x30977189; @synthesize=_homeAddressStreet
@property(retain) NSString *homeFaxNumber;	// G=0x309771bd; S=0x309771d1; @synthesize=_homeFaxNumber
@property(retain) NSString *homeTelephoneNumber;	// G=0x30977199; S=0x309771ad; @synthesize=_homeTelephoneNumber
@property(retain) NSString *im1Address;	// G=0x309774f9; S=0x3097750d; @synthesize=_im1Address
@property(retain) NSString *im2Address;	// G=0x3097751d; S=0x30977531; @synthesize=_im2Address
@property(retain) NSString *im3Address;	// G=0x30977541; S=0x30977555; @synthesize=_im3Address
@property(retain) NSString *jobTitle;	// G=0x309771e1; S=0x309771f5; @synthesize=_jobTitle
@property(retain) NSString *lastName;	// G=0x30977205; S=0x30977219; @synthesize=_lastName
@property(retain) NSString *managerName;	// G=0x30977565; S=0x30977579; @synthesize=_managerName
@property(retain) NSString *middleName;	// G=0x30977229; S=0x3097723d; @synthesize=_middleName
@property(retain) NSString *mms;	// G=0x309775f5; S=0x30977609; @synthesize=_mms
@property(retain) NSString *mobileTelephoneNumber;	// G=0x3097724d; S=0x30977261; @synthesize=_mobileTelephoneNumber
@property(retain) NSString *nickName;	// G=0x309775d1; S=0x309775e5; @synthesize=_nickName
@property(retain) NSString *officeLocation;	// G=0x30977271; S=0x30977285; @synthesize=_officeLocation
@property(retain) NSString *otherAddressCity;	// G=0x30977295; S=0x309772a9; @synthesize=_otherAddressCity
@property(retain) NSString *otherAddressCountry;	// G=0x309772b9; S=0x309772cd; @synthesize=_otherAddressCountry
@property(retain) NSString *otherAddressPostalCode;	// G=0x309772dd; S=0x309772f1; @synthesize=_otherAddressPostalCode
@property(retain) NSString *otherAddressState;	// G=0x30977301; S=0x30977315; @synthesize=_otherAddressState
@property(retain) NSString *otherAddressStreet;	// G=0x30977325; S=0x30977339; @synthesize=_otherAddressStreet
@property(retain) NSString *pagerNumber;	// G=0x30977349; S=0x3097735d; @synthesize=_pagerNumber
@property(retain) NSString *picture;	// G=0x3097736d; S=0x30977381; @synthesize=_picture
@property(retain) NSString *radioTelephoneNumber;	// G=0x30977391; S=0x309773a5; @synthesize=_radioTelephoneNumber
@property(retain) NSString *spouse;	// G=0x309773b5; S=0x309773c9; @synthesize=_spouse
@property(retain) NSString *suffix;	// G=0x309773d9; S=0x309773ed; @synthesize=_suffix
@property(retain) NSString *title;	// G=0x309773fd; S=0x30977411; @synthesize=_title
@property(retain) NSString *webpage;	// G=0x30977421; S=0x30977435; @synthesize=_webpage
@property(retain) NSString *yomiCompanyName;	// G=0x30977445; S=0x30977459; @synthesize=_yomiCompanyName
@property(retain) NSString *yomiFirstName;	// G=0x30977469; S=0x3097747d; @synthesize=_yomiFirstName
@property(retain) NSString *yomiLastName;	// G=0x3097748d; S=0x309774a1; @synthesize=_yomiLastName
+ (void)_setSystemTimeZoneForUnitTests:(id)unitTests;	// 0x3096e3b5
+ (BOOL)acceptsTopLevelLeaves;	// 0x3096e211
+ (id)asParseRules;	// 0x3096e4c1
+ (id)contactWithABRecord:(void *)abrecord serverID:(id)anId;	// 0x30970cdd
+ (BOOL)frontingBasicTypes;	// 0x3096e30d
+ (BOOL)notifyOfUnknownTokens;	// 0x3096e361
+ (BOOL)parsingLeafNode;	// 0x3096e265
+ (BOOL)parsingWithSubItems;	// 0x3096e2b9
- (id)initWithABRecord:(void *)abrecord serverID:(id)anId;	// 0x30970c69
- (id)initWithCoder:(id)coder;	// 0x30976b85
- (void)_detectFileAsAutoConstruction;	// 0x3096fa25
- (void)_loadAttributesFromABRecord:(void *)abrecord;	// 0x30970769
- (void)_reconstructFileAsField;	// 0x30970279
- (BOOL)_saveDatesToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x30970d1d
- (BOOL)_saveEmailsToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x30971f11
- (BOOL)_saveExternalRepToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties storeExternalRep:(BOOL)rep;	// 0x30972809
- (BOOL)_saveIMsToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x309723d5
- (BOOL)_savePhoneNumbersToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x309710dd
- (BOOL)_saveRelatedNamesToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x30970ea5
- (BOOL)_saveStreetAddressesToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x30971945
- (BOOL)_saveURLsToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x30972269
- (BOOL)_setDatesWithExistingRecord:(void *)existingRecord;	// 0x3096ea01
- (BOOL)_setEmailsWithExistingRecord:(void *)existingRecord;	// 0x3096f37d
- (BOOL)_setExternalRepWithExistingRecord:(void *)existingRecord;	// 0x3096f601
- (BOOL)_setIMsWithExistingRecord:(void *)existingRecord;	// 0x3096f50d
- (void)_setImageOnContactFromPerson:(void *)person;	// 0x3096e949
- (BOOL)_setPhoneNumbersWithExistingRecord:(void *)existingRecord;	// 0x3096ec21
- (BOOL)_setRelatedNamesWithExistingRecord:(void *)existingRecord;	// 0x3096eae9
- (BOOL)_setStreetAddressesWithExistingRecord:(void *)existingRecord;	// 0x3096eff5
- (BOOL)_setURLsWithExistingRecord:(void *)existingRecord;	// 0x3096f43d
- (id)_transformedDateForABFramework:(id)abframework;	// 0x3096e3ed
- (id)_transformedDateForActiveSync:(id)activeSync;	// 0x3096e429
// declared property getter: - (id)accountName;	// 0x309775ad
// declared property getter: - (id)anniversary;	// 0x30976d3d
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x30973825
// declared property getter: - (id)assistantName;	// 0x30976d61
// declared property getter: - (id)assistantTelephoneNumber;	// 0x30976d85
// declared property getter: - (id)birthday;	// 0x30976da9
// declared property getter: - (id)body;	// 0x30976dcd
// declared property getter: - (int)bodySize;	// 0x30976ddd
// declared property getter: - (BOOL)bodyTruncated;	// 0x30976e09
// declared property getter: - (id)business2TelephoneNumber;	// 0x30976e39
// declared property getter: - (id)businessAddressCity;	// 0x30976e5d
// declared property getter: - (id)businessAddressCountry;	// 0x30976e81
// declared property getter: - (id)businessAddressPostalCode;	// 0x30976ea5
// declared property getter: - (id)businessAddressState;	// 0x30976ec9
// declared property getter: - (id)businessAddressStreet;	// 0x30976eed
// declared property getter: - (id)businessFaxNumber;	// 0x30976f11
// declared property getter: - (id)businessTelephoneNumber;	// 0x30976f35
// declared property getter: - (id)carTelephoneNumber;	// 0x30976fa1
// declared property getter: - (id)categories;	// 0x30976f59
// declared property getter: - (id)children;	// 0x30976f7d
// declared property getter: - (id)companyMainPhone;	// 0x30977589
// declared property getter: - (id)companyName;	// 0x30976fc5
// declared property getter: - (id)customerID;	// 0x309774b1
- (int)dataclass;	// 0x3096e945
- (void)dealloc;	// 0x30976371
- (BOOL)deleteFromAddressBook;	// 0x30973759
- (BOOL)deleteFromContainer:(void *)container;	// 0x30976d25
// declared property getter: - (id)department;	// 0x30976fe9
- (id)description;	// 0x30976981
// declared property getter: - (id)email1Address;	// 0x3097700d
// declared property getter: - (id)email2Address;	// 0x30977031
// declared property getter: - (id)email3Address;	// 0x30977055
- (void)encodeWithCoder:(id)coder;	// 0x30976c05
// declared property getter: - (id)fileAs;	// 0x30977079
// declared property getter: - (id)firstName;	// 0x3097709d
// declared property getter: - (id)governmentID;	// 0x309774d5
// declared property getter: - (id)home2TelephoneNumber;	// 0x309770c1
// declared property getter: - (id)homeAddressCity;	// 0x309770e5
// declared property getter: - (id)homeAddressCountry;	// 0x30977109
// declared property getter: - (id)homeAddressPostalCode;	// 0x3097712d
// declared property getter: - (id)homeAddressState;	// 0x30977151
// declared property getter: - (id)homeAddressStreet;	// 0x30977175
// declared property getter: - (id)homeFaxNumber;	// 0x309771bd
// declared property getter: - (id)homeTelephoneNumber;	// 0x30977199
// declared property getter: - (id)im1Address;	// 0x309774f9
// declared property getter: - (id)im2Address;	// 0x3097751d
// declared property getter: - (id)im3Address;	// 0x30977541
// declared property getter: - (id)jobTitle;	// 0x309771e1
// declared property getter: - (id)lastName;	// 0x30977205
- (BOOL)loadABRecord;	// 0x3097351d
- (void)loadClientIDs;	// 0x309736f9
- (BOOL)loadLocalItemWithAccount:(id)account;	// 0x30976cf5
// declared property getter: - (id)managerName;	// 0x30977565
// declared property getter: - (id)middleName;	// 0x30977229
// declared property getter: - (id)mms;	// 0x309775f5
// declared property getter: - (id)mobileTelephoneNumber;	// 0x3097724d
// declared property getter: - (id)nickName;	// 0x309775d1
// declared property getter: - (id)officeLocation;	// 0x30977271
// declared property getter: - (id)otherAddressCity;	// 0x30977295
// declared property getter: - (id)otherAddressCountry;	// 0x309772b9
// declared property getter: - (id)otherAddressPostalCode;	// 0x309772dd
// declared property getter: - (id)otherAddressState;	// 0x30977301
// declared property getter: - (id)otherAddressStreet;	// 0x30977325
// declared property getter: - (id)pagerNumber;	// 0x30977349
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x30976889
// declared property getter: - (id)picture;	// 0x3097736d
- (void)postProcessApplicationData;	// 0x309748c1
// declared property getter: - (id)radioTelephoneNumber;	// 0x30977391
- (BOOL)saveServerIDToContact;	// 0x309736b5
- (BOOL)saveServerIDToExistingItem;	// 0x30976d0d
- (BOOL)saveToAddressBookWithExistingRecord:(void *)existingRecord inSource:(void *)source shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge storeExternalRep:(BOOL)rep;	// 0x30972d09
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x30976c81
- (void)setABRecord:(void *)record;	// 0x309734d1
// declared property setter: - (void)setAccountName:(id)name;	// 0x309775c1
// declared property setter: - (void)setAnniversary:(id)anniversary;	// 0x30976d51
// declared property setter: - (void)setAssistantName:(id)name;	// 0x30976d75
// declared property setter: - (void)setAssistantTelephoneNumber:(id)number;	// 0x30976d99
// declared property setter: - (void)setBirthday:(id)birthday;	// 0x30976dbd
// declared property setter: - (void)setBody:(id)body;	// 0x30976b19
// declared property setter: - (void)setBodySize:(int)size;	// 0x30976df1
- (void)setBodySizeNumber:(id)number;	// 0x30976921
// declared property setter: - (void)setBodyTruncated:(BOOL)truncated;	// 0x30976e21
- (void)setBodyTruncatedNumber:(id)number;	// 0x30976951
// declared property setter: - (void)setBusiness2TelephoneNumber:(id)number;	// 0x30976e4d
// declared property setter: - (void)setBusinessAddressCity:(id)city;	// 0x30976e71
// declared property setter: - (void)setBusinessAddressCountry:(id)country;	// 0x30976e95
// declared property setter: - (void)setBusinessAddressPostalCode:(id)code;	// 0x30976eb9
// declared property setter: - (void)setBusinessAddressState:(id)state;	// 0x30976edd
// declared property setter: - (void)setBusinessAddressStreet:(id)street;	// 0x30976f01
// declared property setter: - (void)setBusinessFaxNumber:(id)number;	// 0x30976f25
// declared property setter: - (void)setBusinessTelephoneNumber:(id)number;	// 0x30976f49
// declared property setter: - (void)setCarTelephoneNumber:(id)number;	// 0x30976fb5
// declared property setter: - (void)setCategories:(id)categories;	// 0x30976f6d
// declared property setter: - (void)setChildren:(id)children;	// 0x30976f91
// declared property setter: - (void)setCompanyMainPhone:(id)phone;	// 0x3097759d
// declared property setter: - (void)setCompanyName:(id)name;	// 0x30976fd9
// declared property setter: - (void)setCustomerID:(id)anId;	// 0x309774c5
// declared property setter: - (void)setDepartment:(id)department;	// 0x30976ffd
// declared property setter: - (void)setEmail1Address:(id)address;	// 0x30977021
// declared property setter: - (void)setEmail2Address:(id)address;	// 0x30977045
// declared property setter: - (void)setEmail3Address:(id)address;	// 0x30977069
- (void)setEmailFromAppData:(int)appData setter:(SEL)setter;	// 0x30974839
// declared property setter: - (void)setFileAs:(id)as;	// 0x3097708d
// declared property setter: - (void)setFirstName:(id)name;	// 0x309770b1
// declared property setter: - (void)setGovernmentID:(id)anId;	// 0x309774e9
// declared property setter: - (void)setHome2TelephoneNumber:(id)number;	// 0x309770d5
// declared property setter: - (void)setHomeAddressCity:(id)city;	// 0x309770f9
// declared property setter: - (void)setHomeAddressCountry:(id)country;	// 0x3097711d
// declared property setter: - (void)setHomeAddressPostalCode:(id)code;	// 0x30977141
// declared property setter: - (void)setHomeAddressState:(id)state;	// 0x30977165
// declared property setter: - (void)setHomeAddressStreet:(id)street;	// 0x30977189
// declared property setter: - (void)setHomeFaxNumber:(id)number;	// 0x309771d1
// declared property setter: - (void)setHomeTelephoneNumber:(id)number;	// 0x309771ad
// declared property setter: - (void)setIm1Address:(id)address;	// 0x3097750d
// declared property setter: - (void)setIm2Address:(id)address;	// 0x30977531
// declared property setter: - (void)setIm3Address:(id)address;	// 0x30977555
// declared property setter: - (void)setJobTitle:(id)title;	// 0x309771f5
// declared property setter: - (void)setLastName:(id)name;	// 0x30977219
- (void)setLocalItem:(void *)item;	// 0x30976ce5
// declared property setter: - (void)setManagerName:(id)name;	// 0x30977579
// declared property setter: - (void)setMiddleName:(id)name;	// 0x3097723d
// declared property setter: - (void)setMms:(id)mms;	// 0x30977609
// declared property setter: - (void)setMobileTelephoneNumber:(id)number;	// 0x30977261
// declared property setter: - (void)setNickName:(id)name;	// 0x309775e5
// declared property setter: - (void)setOfficeLocation:(id)location;	// 0x30977285
// declared property setter: - (void)setOtherAddressCity:(id)city;	// 0x309772a9
// declared property setter: - (void)setOtherAddressCountry:(id)country;	// 0x309772cd
// declared property setter: - (void)setOtherAddressPostalCode:(id)code;	// 0x309772f1
// declared property setter: - (void)setOtherAddressState:(id)state;	// 0x30977315
// declared property setter: - (void)setOtherAddressStreet:(id)street;	// 0x30977339
// declared property setter: - (void)setPagerNumber:(id)number;	// 0x3097735d
// declared property setter: - (void)setPicture:(id)picture;	// 0x30977381
// declared property setter: - (void)setRadioTelephoneNumber:(id)number;	// 0x309773a5
// declared property setter: - (void)setSpouse:(id)spouse;	// 0x309773c9
// declared property setter: - (void)setSuffix:(id)suffix;	// 0x309773ed
// declared property setter: - (void)setTitle:(id)title;	// 0x30977411
// declared property setter: - (void)setWebpage:(id)webpage;	// 0x30977435
// declared property setter: - (void)setYomiCompanyName:(id)name;	// 0x30977459
// declared property setter: - (void)setYomiFirstName:(id)name;	// 0x3097747d
// declared property setter: - (void)setYomiLastName:(id)name;	// 0x309774a1
// declared property getter: - (id)spouse;	// 0x309773b5
// declared property getter: - (id)suffix;	// 0x309773d9
// declared property getter: - (id)title;	// 0x309773fd
// declared property getter: - (id)webpage;	// 0x30977421
// declared property getter: - (id)yomiCompanyName;	// 0x30977445
// declared property getter: - (id)yomiFirstName;	// 0x30977469
// declared property getter: - (id)yomiLastName;	// 0x3097748d
@end

