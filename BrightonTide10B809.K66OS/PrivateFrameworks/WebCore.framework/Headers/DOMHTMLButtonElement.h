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
@property(copy) NSString *accessKey;	// G=0x35fd3f1d; S=0x35fd4041; 
@property(assign) BOOL autofocus;	// G=0x35fd1e9d; S=0x35fd1fa9; 
@property(assign) BOOL disabled;	// G=0x35fd20bd; S=0x35fd21c9; 
@property(readonly, assign) DOMHTMLFormElement *form;	// G=0x35fd22dd; 
@property(retain) id formAction;	// G=0x35fd23e1; S=0x35fd25a9; converted property
@property(retain) id formEnctype;	// G=0x35fd275d; S=0x35fd2919; converted property
@property(retain) id formMethod;	// G=0x35fd2ac1; S=0x35fd2c7d; converted property
@property(assign) BOOL formNoValidate;	// G=0x35fd2e25; S=0x35fd2f31; converted property
@property(retain) id formTarget;	// G=0x35fd3045; S=0x35fd3169; converted property
@property(copy) NSString *name;	// G=0x35fd331d; S=0x35fd3441; 
@property(readonly, assign) NSString *type;	// G=0x35fd35f5; 
@property(copy) NSString *value;	// G=0x35fd3711; S=0x35fd3835; 
@property(readonly, assign) BOOL willValidate;	// G=0x35fd39e9; 
// declared property getter: - (id)accessKey;	// 0x35fd3f1d
// declared property getter: - (BOOL)autofocus;	// 0x35fd1e9d
- (BOOL)checkValidity;	// 0x35fd41f5
- (void)click;	// 0x35fd44a1
// declared property getter: - (BOOL)disabled;	// 0x35fd20bd
// declared property getter: - (id)form;	// 0x35fd22dd
// converted property getter: - (id)formAction;	// 0x35fd23e1
// converted property getter: - (id)formEnctype;	// 0x35fd275d
// converted property getter: - (id)formMethod;	// 0x35fd2ac1
// converted property getter: - (BOOL)formNoValidate;	// 0x35fd2e25
// converted property getter: - (id)formTarget;	// 0x35fd3045
- (id)labels;	// 0x35fd3db5
// declared property getter: - (id)name;	// 0x35fd331d
// declared property setter: - (void)setAccessKey:(id)key;	// 0x35fd4041
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x35fd1fa9
- (void)setCustomValidity:(id)validity;	// 0x35fd42f9
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x35fd21c9
// converted property setter: - (void)setFormAction:(id)action;	// 0x35fd25a9
// converted property setter: - (void)setFormEnctype:(id)enctype;	// 0x35fd2919
// converted property setter: - (void)setFormMethod:(id)method;	// 0x35fd2c7d
// converted property setter: - (void)setFormNoValidate:(BOOL)validate;	// 0x35fd2f31
// converted property setter: - (void)setFormTarget:(id)target;	// 0x35fd3169
// declared property setter: - (void)setName:(id)name;	// 0x35fd3441
// declared property setter: - (void)setValue:(id)value;	// 0x35fd3835
- (int)structuralComplexityContribution;	// 0x3602ac55
// declared property getter: - (id)type;	// 0x35fd35f5
- (id)validationMessage;	// 0x35fd3bf9
- (id)validity;	// 0x35fd3aed
// declared property getter: - (id)value;	// 0x35fd3711
// declared property getter: - (BOOL)willValidate;	// 0x35fd39e9
@end

