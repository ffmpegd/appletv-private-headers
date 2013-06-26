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
+ (BOOL)acceptsTopLevelLeaves;	// 0x339d5d35
+ (id)asParseRules;	// 0x339d5f69
+ (BOOL)frontingBasicTypes;	// 0x339d5e31
+ (BOOL)notifyOfUnknownTokens;	// 0x339d5e85
+ (BOOL)parsingLeafNode;	// 0x339d5d89
+ (BOOL)parsingWithSubItems;	// 0x339d5ddd
- (void)_cleanUpPolicyData:(id)data;	// 0x339d6449
- (void)_setPolicyData:(id)data;	// 0x339d5f25
- (void)dealloc;	// 0x339d5ed9
- (id)perDomainDictsForPolicy;	// 0x339d6661
@end
