/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLButtonElement : DOMHTMLElement {
}
@property(copy) NSString *accessKey;	// G=0x33f87de5; S=0x33f87f19; 
@property(assign) BOOL autofocus;	// G=0x33f87ccd; S=0x33f88055; 
@property(assign) BOOL disabled;	// G=0x33f87cad; S=0x33f88031; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x33f87d0d; 
@property(assign) BOOL formNoValidate;	// G=0x33f87d29; S=0x33f87d45; converted property
@property(copy) NSString *name;	// G=0x33f87d85; S=0x33f88079; 
@property(readonly, copy) NSString *type;	// G=0x33f87db5; 
@property(copy) NSString *value;	// G=0x33f88191; S=0x33f882c5; 
@property(readonly, assign) BOOL willValidate;	// G=0x33f87ced; 
// declared property getter: - (id)accessKey;	// 0x33f87de5
// declared property getter: - (BOOL)autofocus;	// 0x33f87ccd
- (BOOL)checkValidity;	// 0x33f88511
- (void)click;	// 0x33f88645
// declared property getter: - (BOOL)disabled;	// 0x33f87cad
// declared property getter: - (id)form;	// 0x33f87d0d
// converted property getter: - (BOOL)formNoValidate;	// 0x33f87d29
// declared property getter: - (id)name;	// 0x33f87d85
// declared property setter: - (void)setAccessKey:(id)key;	// 0x33f87f19
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x33f88055
- (void)setCustomValidity:(id)validity;	// 0x33f8852d
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x33f88031
// converted property setter: - (void)setFormNoValidate:(BOOL)validate;	// 0x33f87d45
// declared property setter: - (void)setName:(id)name;	// 0x33f88079
// declared property setter: - (void)setValue:(id)value;	// 0x33f882c5
- (int)structuralComplexityContribution;	// 0x33faf325
// declared property getter: - (id)type;	// 0x33f87db5
- (id)validationMessage;	// 0x33f883dd
- (id)validity;	// 0x33f87d69
// declared property getter: - (id)value;	// 0x33f88191
// declared property getter: - (BOOL)willValidate;	// 0x33f87ced
@end
