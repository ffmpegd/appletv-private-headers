/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMHTMLTableCaptionElement, DOMHTMLCollection, DOMHTMLTableSectionElement;

@interface DOMHTMLTableElement : DOMHTMLElement {
}
@property(copy) NSString *align;	// G=0x31b1a251; S=0x31b1a375; 
@property(copy) NSString *bgColor;	// G=0x31b1a529; S=0x31b1a64d; 
@property(copy) NSString *border;	// G=0x31b1a801; S=0x31b1a925; 
@property(retain) DOMHTMLTableCaptionElement *caption;	// G=0x31b19895; S=0x31b199a1; 
@property(copy) NSString *cellPadding;	// G=0x31b1aad9; S=0x31b1abfd; 
@property(copy) NSString *cellSpacing;	// G=0x31b1adb1; S=0x31b1aed5; 
@property(copy) NSString *frameBorders;	// G=0x31b1b089; S=0x31b1b1ad; 
@property(readonly, assign) DOMHTMLCollection *rows;	// G=0x31b1a039; 
@property(copy) NSString *rules;	// G=0x31b1b361; S=0x31b1b485; 
@property(copy) NSString *summary;	// G=0x31b1b639; S=0x31b1b75d; 
@property(readonly, assign) DOMHTMLCollection *tBodies;	// G=0x31b1a145; 
@property(retain) DOMHTMLTableSectionElement *tFoot;	// G=0x31b19dad; S=0x31b19eb9; 
@property(retain) DOMHTMLTableSectionElement *tHead;	// G=0x31b19b21; S=0x31b19c2d; 
@property(copy) NSString *width;	// G=0x31b1b911; S=0x31b1ba35; 
// declared property getter: - (id)align;	// 0x31b1a251
// declared property getter: - (id)bgColor;	// 0x31b1a529
// declared property getter: - (id)border;	// 0x31b1a801
// declared property getter: - (id)caption;	// 0x31b19895
// declared property getter: - (id)cellPadding;	// 0x31b1aad9
// declared property getter: - (id)cellSpacing;	// 0x31b1adb1
- (id)createCaption;	// 0x31b1c20d
- (id)createTBody;	// 0x31b1c0a9
- (id)createTFoot;	// 0x31b1be49
- (id)createTHead;	// 0x31b1bbe9
- (void)deleteCaption;	// 0x31b1c371
- (void)deleteRow:(int)row;	// 0x31b1c5e5
- (void)deleteTFoot;	// 0x31b1bfad
- (void)deleteTHead;	// 0x31b1bd4d
// declared property getter: - (id)frameBorders;	// 0x31b1b089
- (id)insertRow:(int)row;	// 0x31b1c46d
// declared property getter: - (id)rows;	// 0x31b1a039
// declared property getter: - (id)rules;	// 0x31b1b361
// declared property setter: - (void)setAlign:(id)align;	// 0x31b1a375
// declared property setter: - (void)setBgColor:(id)color;	// 0x31b1a64d
// declared property setter: - (void)setBorder:(id)border;	// 0x31b1a925
// declared property setter: - (void)setCaption:(id)caption;	// 0x31b199a1
// declared property setter: - (void)setCellPadding:(id)padding;	// 0x31b1abfd
// declared property setter: - (void)setCellSpacing:(id)spacing;	// 0x31b1aed5
// declared property setter: - (void)setFrameBorders:(id)borders;	// 0x31b1b1ad
// declared property setter: - (void)setRules:(id)rules;	// 0x31b1b485
// declared property setter: - (void)setSummary:(id)summary;	// 0x31b1b75d
// declared property setter: - (void)setTFoot:(id)foot;	// 0x31b19eb9
// declared property setter: - (void)setTHead:(id)head;	// 0x31b19c2d
// declared property setter: - (void)setWidth:(id)width;	// 0x31b1ba35
- (int)structuralComplexityContribution;	// 0x31b3d215
// declared property getter: - (id)summary;	// 0x31b1b639
// declared property getter: - (id)tBodies;	// 0x31b1a145
// declared property getter: - (id)tFoot;	// 0x31b19dad
// declared property getter: - (id)tHead;	// 0x31b19b21
// declared property getter: - (id)width;	// 0x31b1b911
@end

