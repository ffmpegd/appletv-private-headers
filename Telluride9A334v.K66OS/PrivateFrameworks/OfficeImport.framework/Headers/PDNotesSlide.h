/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideChild.h"

@class PDNotesMaster;

__attribute__((visibility("hidden")))
@interface PDNotesSlide : PDSlideChild {
@private
	PDNotesMaster *mNotesMaster;	// 44 = 0x2c
}
@property(retain) id notesMaster;	// G=0x356a6c01; S=0x356a6b39; converted property
- (id)init;	// 0x356a6b0d
- (void)dealloc;	// 0x356a6d95
- (void)doneWithContent;	// 0x356fa75d
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x356a6cb1
// converted property getter: - (id)notesMaster;	// 0x356a6c01
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x356a6c69
- (id)parentSlideBase;	// 0x356a6b7d
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x356a6c11
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;	// 0x356a6b8d
// converted property setter: - (void)setNotesMaster:(id)master;	// 0x356a6b39
@end

