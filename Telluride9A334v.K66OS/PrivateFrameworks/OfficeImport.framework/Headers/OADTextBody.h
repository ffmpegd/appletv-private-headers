/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, OADTextBodyProperties, OADTextListStyle;

__attribute__((visibility("hidden")))
@interface OADTextBody : NSObject {
@private
	OADTextBodyProperties *mProperties;	// 4 = 0x4
	NSMutableArray *mParagraphs;	// 8 = 0x8
	OADTextListStyle *mTextListStyle;	// 12 = 0xc
}
@property(retain) id properties;	// G=0x354e4ed9; S=0x356f27e5; converted property
- (id)init;	// 0x354eb565
- (id)addParagraph;	// 0x35560995
- (void)addParagraphsFromTextBody:(id)textBody;	// 0x3579c09d
- (void)applyTextListStyle:(id)style;	// 0x35789675
- (void)dealloc;	// 0x355632ad
- (id)findFirstTextRunOfClass:(Class)aClass;	// 0x355651b1
- (void)flattenProperties;	// 0x35789541
- (BOOL)isEmpty;	// 0x355aabc9
- (id)overrideTextListStyle;	// 0x355a5955
- (id)paragraphAtIndex:(unsigned)index;	// 0x354e5619
- (unsigned)paragraphCount;	// 0x354e55f9
- (id)plainText;	// 0x356aef8d
// converted property getter: - (id)properties;	// 0x354e4ed9
- (void)removeAllParagraphs;	// 0x35789711
- (void)removeTrailingNewlines;	// 0x357895f5
- (void)removeUnnecessaryOverrides;	// 0x35565e5d
- (void)setParentTextListStyle:(id)style;	// 0x35565901
// converted property setter: - (void)setProperties:(id)properties;	// 0x356f27e5
- (id)textListStyle;	// 0x355658cd
@end

