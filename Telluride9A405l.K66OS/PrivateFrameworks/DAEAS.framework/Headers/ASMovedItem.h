/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, NSString;

@interface ASMovedItem : ASItem {
	NSString *_srcMsgId;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	NSString *_dstMsgId;	// 48 = 0x30
}
@property(retain) NSString *dstMsgId;	// G=0x341fd975; S=0x341fd9ad; converted property
@property(retain) NSString *srcMsgId;	// G=0x341fd87d; S=0x341fd8b5; converted property
@property(retain) NSNumber *status;	// G=0x341fd8f9; S=0x341fd931; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x341fd451
+ (BOOL)frontingBasicTypes;	// 0x341fd54d
+ (BOOL)notifyOfUnknownTokens;	// 0x341fd5a1
+ (BOOL)parsingLeafNode;	// 0x341fd4a5
+ (BOOL)parsingWithSubItems;	// 0x341fd4f9
- (id)asParseRules;	// 0x341fd669
- (void)dealloc;	// 0x341fd5f5
// converted property getter: - (id)dstMsgId;	// 0x341fd975
// converted property setter: - (void)setDstMsgId:(id)anId;	// 0x341fd9ad
// converted property setter: - (void)setSrcMsgId:(id)anId;	// 0x341fd8b5
// converted property setter: - (void)setStatus:(id)status;	// 0x341fd931
// converted property getter: - (id)srcMsgId;	// 0x341fd87d
// converted property getter: - (id)status;	// 0x341fd8f9
@end

