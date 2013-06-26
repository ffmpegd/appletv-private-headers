/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, ASFolderItemsSyncResponse, NSNumber, NSString;

@interface ASCollection : ASItem {
	int _dataclass;	// 40 = 0x28
	NSString *_syncKey;	// 44 = 0x2c
	NSString *_collectionId;	// 48 = 0x30
	NSNumber *_status;	// 52 = 0x34
	NSNumber *_moreAvailable;	// 56 = 0x38
	NSArray *_changedItems;	// 60 = 0x3c
	NSArray *_responseItems;	// 64 = 0x40
	ASFolderItemsSyncResponse *_parentResponse;	// 68 = 0x44
	int _sniffableType;	// 72 = 0x48
	BOOL _checkedShouldSniffInvites;	// 76 = 0x4c
}
@property(retain) NSArray *changedItems;	// G=0x36e3bf81; S=0x36e3bfb9; converted property
@property(retain) NSString *collectionId;	// G=0x36e3dcf1; S=0x36e3dd29; converted property
@property(readonly, assign) int dataclass;	// G=0x36e3bdd1; converted property
@property(retain) NSNumber *moreAvailable;	// G=0x36e3dde9; S=0x36e3de21; converted property
@property(retain) NSArray *responseItems;	// G=0x36e3bffd; S=0x36e3c035; converted property
@property(retain) NSNumber *status;	// G=0x36e3dd6d; S=0x36e3dda5; converted property
@property(retain) NSString *syncKey;	// G=0x36e3dc75; S=0x36e3dcad; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x36e3bb1d
+ (id)asParseRules;	// 0x36e3c079
+ (BOOL)frontingBasicTypes;	// 0x36e3bc19
+ (BOOL)notifyOfUnknownTokens;	// 0x36e3bc6d
+ (BOOL)parsingLeafNode;	// 0x36e3bb71
+ (BOOL)parsingWithSubItems;	// 0x36e3bbc5
- (id)init;	// 0x36e3bcc1
// converted property getter: - (id)changedItems;	// 0x36e3bf81
// converted property getter: - (id)collectionId;	// 0x36e3dcf1
// converted property getter: - (int)dataclass;	// 0x36e3bdd1
- (void)dealloc;	// 0x36e3bd0d
- (id)description;	// 0x36e3de65
// converted property getter: - (id)moreAvailable;	// 0x36e3dde9
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x36e3db0d
// converted property getter: - (id)responseItems;	// 0x36e3bffd
// converted property setter: - (void)setChangedItems:(id)items;	// 0x36e3bfb9
// converted property setter: - (void)setCollectionId:(id)anId;	// 0x36e3dd29
- (void)setDataclassString:(id)string;	// 0x36e3bea1
// converted property setter: - (void)setMoreAvailable:(id)available;	// 0x36e3de21
- (void)setParentResponse:(id)response;	// 0x36e3bdc1
// converted property setter: - (void)setResponseItems:(id)items;	// 0x36e3c035
// converted property setter: - (void)setStatus:(id)status;	// 0x36e3dda5
// converted property setter: - (void)setSyncKey:(id)key;	// 0x36e3dcad
- (int)sniffableTypeForAccount:(id)account;	// 0x36e3dc05
// converted property getter: - (id)status;	// 0x36e3dd6d
// converted property getter: - (id)syncKey;	// 0x36e3dc75
@end
