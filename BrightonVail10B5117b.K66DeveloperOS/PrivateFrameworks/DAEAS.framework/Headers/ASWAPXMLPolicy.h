/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASPolicy.h"

@class NSString;

@interface ASWAPXMLPolicy : ASPolicy {
	NSString *_data;	// 52 = 0x34
}
@property(readonly, retain) NSString *data;	// G=0x33bb6fe9; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x33bb6df9
+ (id)asParseRules;	// 0x33bb704d
+ (BOOL)frontingBasicTypes;	// 0x33bb6ef5
+ (BOOL)notifyOfUnknownTokens;	// 0x33bb6f49
+ (BOOL)parsingLeafNode;	// 0x33bb6e4d
+ (BOOL)parsingWithSubItems;	// 0x33bb6ea1
- (id)_policyForWAPProvisioningXMLData;	// 0x33bb7271
- (void)_setData:(id)data;	// 0x33bb7009
- (id)_wbxmlPolicyDict;	// 0x33bb77cd
// converted property getter: - (id)data;	// 0x33bb6fe9
- (void)dealloc;	// 0x33bb6f9d
- (id)perDomainDictsForPolicy;	// 0x33bb7ca1
@end
