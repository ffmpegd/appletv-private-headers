/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMHTMLFormElement, DOMHTMLOptionsCollection;

@interface DOMHTMLSelectElement : DOMHTMLElement {
}
@property(assign) BOOL autofocus;	// G=0x36ac478d; S=0x36ac4899; 
@property(assign) BOOL disabled;	// G=0x36ac49ad; S=0x36ac4ab9; 
@property(readonly, assign) DOMHTMLFormElement *form;	// G=0x36ac4bcd; 
@property(readonly, assign) int length;	// G=0x36ac5649; 
@property(assign) BOOL multiple;	// G=0x36ac4cd1; S=0x36ac4d05; 
@property(copy) NSString *name;	// G=0x36ac4e0d; S=0x36ac4f29; 
@property(readonly, assign) DOMHTMLOptionsCollection *options;	// G=0x36ac553d; 
@property(assign) BOOL required;	// G=0x36ac50d1; S=0x36ac51dd; converted property
@property(assign) int selectedIndex;	// G=0x36ac5855; S=0x36ac5955; 
@property(assign) int size;	// G=0x36ac52f1; S=0x36ac5321; 
@property(readonly, assign) NSString *type;	// G=0x36ac5421; 
@property(copy) NSString *value;	// G=0x36ac5a55; S=0x36ac5c11; 
@property(readonly, assign) BOOL willValidate;	// G=0x36ac5db9; 
- (void)_activateItemAtIndex:(int)index;	// 0x36a8bf6d
- (void)_activateItemAtIndex:(int)index allowMultipleSelection:(BOOL)selection;	// 0x36a8bf8d
- (void)add:(id)add :(id)arg2;	// 0x36ac66e1
- (void)add:(id)add before:(id)before;	// 0x36ac65b1
// declared property getter: - (BOOL)autofocus;	// 0x36ac478d
- (BOOL)checkValidity;	// 0x36ac6911
- (unsigned)completeLength;	// 0x36aee975
// declared property getter: - (BOOL)disabled;	// 0x36ac49ad
// declared property getter: - (id)form;	// 0x36ac4bcd
- (id)item:(unsigned)item;	// 0x36ac62ed
- (id)labels;	// 0x36ac6185
// declared property getter: - (int)length;	// 0x36ac5649
- (id)listItemAtIndex:(int)index;	// 0x36aee985
// declared property getter: - (BOOL)multiple;	// 0x36ac4cd1
// declared property getter: - (id)name;	// 0x36ac4e0d
- (id)namedItem:(id)item;	// 0x36ac63fd
// declared property getter: - (id)options;	// 0x36ac553d
- (void)remove:(int)remove;	// 0x36ac6811
// converted property getter: - (BOOL)required;	// 0x36ac50d1
// declared property getter: - (int)selectedIndex;	// 0x36ac5855
- (id)selectedOptions;	// 0x36ac5749
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x36ac4899
- (void)setCustomValidity:(id)validity;	// 0x36ac6a15
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x36ac4ab9
// declared property setter: - (void)setMultiple:(BOOL)multiple;	// 0x36ac4d05
// declared property setter: - (void)setName:(id)name;	// 0x36ac4f29
// converted property setter: - (void)setRequired:(BOOL)required;	// 0x36ac51dd
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x36ac5955
// declared property setter: - (void)setSize:(int)size;	// 0x36ac5321
// declared property setter: - (void)setValue:(id)value;	// 0x36ac5c11
// declared property getter: - (int)size;	// 0x36ac52f1
- (int)structuralComplexityContribution;	// 0x36aee71d
// declared property getter: - (id)type;	// 0x36ac5421
- (id)validationMessage;	// 0x36ac5fc9
- (id)validity;	// 0x36ac5ebd
// declared property getter: - (id)value;	// 0x36ac5a55
// declared property getter: - (BOOL)willValidate;	// 0x36ac5db9
@end

