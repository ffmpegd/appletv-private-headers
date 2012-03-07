/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDProtection, EDString, EDAlignmentInfo;

__attribute__((visibility("hidden")))
@interface EDTextBox : NSObject {
@private
	EDString *mText;	// 4 = 0x4
	EDAlignmentInfo *mAlignmentInfo;	// 8 = 0x8
	EDProtection *mProtection;	// 12 = 0xc
}
@property(retain) id alignmentInfo;	// G=0x34dd0fe5; S=0x34cdccf1; converted property
@property(retain) id protection;	// G=0x34dd0ff5; S=0x34cdcd6d; converted property
@property(retain) id text;	// G=0x34cdcf45; S=0x34cdcdb5; converted property
+ (id)textBox;	// 0x34cdcc09
// converted property getter: - (id)alignmentInfo;	// 0x34dd0fe5
- (void)dealloc;	// 0x34cdcf65
// converted property getter: - (id)protection;	// 0x34dd0ff5
// converted property setter: - (void)setAlignmentInfo:(id)info;	// 0x34cdccf1
// converted property setter: - (void)setProtection:(id)protection;	// 0x34cdcd6d
// converted property setter: - (void)setText:(id)text;	// 0x34cdcdb5
// converted property getter: - (id)text;	// 0x34cdcf45
@end
