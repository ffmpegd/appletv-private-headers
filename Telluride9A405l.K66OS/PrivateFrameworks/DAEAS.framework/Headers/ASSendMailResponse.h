/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber;

@interface ASSendMailResponse : ASItem {
	NSNumber *_status;	// 40 = 0x28
}
@property(retain) NSNumber *status;	// G=0x342111b9; S=0x342111cd; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x34210e95
+ (BOOL)frontingBasicTypes;	// 0x34210f91
+ (BOOL)notifyOfUnknownTokens;	// 0x34210fe5
+ (BOOL)parsingLeafNode;	// 0x34210ee9
+ (BOOL)parsingWithSubItems;	// 0x34210f3d
- (id)asParseRules;	// 0x34211039
- (void)dealloc;	// 0x3421116d
- (id)description;	// 0x34211111
// declared property setter: - (void)setStatus:(id)status;	// 0x342111cd
// declared property getter: - (id)status;	// 0x342111b9
@end
