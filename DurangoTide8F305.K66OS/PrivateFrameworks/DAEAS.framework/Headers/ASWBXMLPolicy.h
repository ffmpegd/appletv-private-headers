/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASPolicy.h"

@class NSMutableDictionary;

@interface ASWBXMLPolicy : ASPolicy {
	NSMutableDictionary *_policyData;	// 52 = 0x34
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x302f26c5
+ (BOOL)frontingBasicTypes;	// 0x302f25ed
+ (BOOL)notifyOfUnknownTokens;	// 0x302f25a5
+ (BOOL)parsingLeafNode;	// 0x302f267d
+ (BOOL)parsingWithSubItems;	// 0x302f2635
- (void)_cleanUpPolicyData:(id)data;	// 0x302f2441
- (void)_setPolicyData:(id)data;	// 0x302f2569
- (id)asParseRules;	// 0x302f270d
- (void)dealloc;	// 0x302f2a89
- (id)perDomainDictsForPolicy;	// 0x302f2ad1
@end

