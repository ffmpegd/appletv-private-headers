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
@property(copy) NSString *accessKey;	// G=0x35bc38b5; S=0x35bc3249; 
@property(assign) BOOL autofocus;	// G=0x35bc3ce5; S=0x35bc3f5d; 
@property(assign) BOOL disabled;	// G=0x35bc3c1d; S=0x35bc3e85; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x35bc2a4d; 
@property(retain) id formAction;	// G=0x35bc2be1; S=0x35bc2d39; converted property
@property(retain) id formEnctype;	// G=0x35bc3615; S=0x35bc2e7d; converted property
@property(retain) id formMethod;	// G=0x35bc36f5; S=0x35bc2fc1; converted property
@property(assign) BOOL formNoValidate;	// G=0x35bc3b55; S=0x35bc3dad; converted property
@property(retain) id formTarget;	// G=0x35bc37d5; S=0x35bc3105; converted property
@property(copy) NSString *name;	// G=0x35bc3995; S=0x35bc338d; 
@property(readonly, copy) NSString *type;	// G=0x35bc2b09; 
@property(copy) NSString *value;	// G=0x35bc3a75; S=0x35bc34d1; 
@property(readonly, assign) BOOL willValidate;	// G=0x35bc298d; 
// declared property getter: - (id)accessKey;	// 0x35bc38b5
// declared property getter: - (BOOL)autofocus;	// 0x35bc3ce5
- (BOOL)checkValidity;	// 0x35bc4395
- (void)click;	// 0x35bc458d
// declared property getter: - (BOOL)disabled;	// 0x35bc3c1d
// declared property getter: - (id)form;	// 0x35bc2a4d
// converted property getter: - (id)formAction;	// 0x35bc2be1
// converted property getter: - (id)formEnctype;	// 0x35bc3615
// converted property getter: - (id)formMethod;	// 0x35bc36f5
// converted property getter: - (BOOL)formNoValidate;	// 0x35bc3b55
// converted property getter: - (id)formTarget;	// 0x35bc37d5
- (id)labels;	// 0x35bc424d
// declared property getter: - (id)name;	// 0x35bc3995
// declared property setter: - (void)setAccessKey:(id)key;	// 0x35bc3249
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x35bc3f5d
- (void)setCustomValidity:(id)validity;	// 0x35bc4455
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x35bc3e85
// converted property setter: - (void)setFormAction:(id)action;	// 0x35bc2d39
// converted property setter: - (void)setFormEnctype:(id)enctype;	// 0x35bc2e7d
// converted property setter: - (void)setFormMethod:(id)method;	// 0x35bc2fc1
// converted property setter: - (void)setFormNoValidate:(BOOL)validate;	// 0x35bc3dad
// converted property setter: - (void)setFormTarget:(id)target;	// 0x35bc3105
// declared property setter: - (void)setName:(id)name;	// 0x35bc338d
// declared property setter: - (void)setValue:(id)value;	// 0x35bc34d1
- (int)structuralComplexityContribution;	// 0x35c0259d
// declared property getter: - (id)type;	// 0x35bc2b09
- (id)validationMessage;	// 0x35bc4101
- (id)validity;	// 0x35bc4035
// declared property getter: - (id)value;	// 0x35bc3a75
// declared property getter: - (BOOL)willValidate;	// 0x35bc298d
@end

