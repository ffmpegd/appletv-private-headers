/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLCollection, NSString;

__attribute__((visibility("hidden")))
@interface DOMHTMLTableSectionElement : DOMHTMLElement {
}
@property(copy) NSString *align;	// G=0x35becc49; S=0x35becfc9; 
@property(copy) NSString *ch;	// G=0x35becd29; S=0x35bed10d; 
@property(copy) NSString *chOff;	// G=0x35bece09; S=0x35bed251; 
@property(readonly, retain) DOMHTMLCollection *rows;	// G=0x35bed4d9; 
@property(copy) NSString *vAlign;	// G=0x35becee9; S=0x35bed395; 
// declared property getter: - (id)align;	// 0x35becc49
// declared property getter: - (id)ch;	// 0x35becd29
// declared property getter: - (id)chOff;	// 0x35bece09
- (void)deleteRow:(int)row;	// 0x35bed775
- (id)insertRow:(int)row;	// 0x35bed621
// declared property getter: - (id)rows;	// 0x35bed4d9
// declared property setter: - (void)setAlign:(id)align;	// 0x35becfc9
// declared property setter: - (void)setCh:(id)ch;	// 0x35bed10d
// declared property setter: - (void)setChOff:(id)off;	// 0x35bed251
// declared property setter: - (void)setVAlign:(id)align;	// 0x35bed395
// declared property getter: - (id)vAlign;	// 0x35becee9
@end
