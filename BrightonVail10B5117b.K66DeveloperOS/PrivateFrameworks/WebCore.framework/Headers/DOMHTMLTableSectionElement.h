/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMHTMLCollection;

@interface DOMHTMLTableSectionElement : DOMHTMLElement {
}
@property(copy) NSString *align;	// G=0x361e3d61; S=0x361e3e85; 
@property(copy) NSString *ch;	// G=0x361e4039; S=0x361e415d; 
@property(copy) NSString *chOff;	// G=0x361e4311; S=0x361e4435; 
@property(readonly, assign) DOMHTMLCollection *rows;	// G=0x361e48c1; 
@property(copy) NSString *vAlign;	// G=0x361e45e9; S=0x361e470d; 
// declared property getter: - (id)align;	// 0x361e3d61
// declared property getter: - (id)ch;	// 0x361e4039
// declared property getter: - (id)chOff;	// 0x361e4311
- (void)deleteRow:(int)row;	// 0x361e4b45
- (id)insertRow:(int)row;	// 0x361e49cd
// declared property getter: - (id)rows;	// 0x361e48c1
// declared property setter: - (void)setAlign:(id)align;	// 0x361e3e85
// declared property setter: - (void)setCh:(id)ch;	// 0x361e415d
// declared property setter: - (void)setChOff:(id)off;	// 0x361e4435
// declared property setter: - (void)setVAlign:(id)align;	// 0x361e470d
// declared property getter: - (id)vAlign;	// 0x361e45e9
@end

