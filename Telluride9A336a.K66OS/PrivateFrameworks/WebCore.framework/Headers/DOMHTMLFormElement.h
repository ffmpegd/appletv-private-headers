/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLCollection, NSString;

@interface DOMHTMLFormElement : DOMHTMLElement {
}
@property(copy) NSString *acceptCharset;	// G=0x31bf146d; S=0x31bf1851; 
@property(copy) NSString *action;	// G=0x31bf21b9; S=0x31bf1995; 
@property(retain) id autocapitalize;	// G=0x31bf2709; S=0x31bf27dd; converted property
@property(assign) BOOL autocorrect;	// G=0x31bf2581; S=0x31bf263d; converted property
@property(readonly, retain) DOMHTMLCollection *elements;	// G=0x31bf1189; 
@property(copy) NSString *encoding;	// G=0x31bf1d61; S=0x31bf2311; 
@property(copy) NSString *enctype;	// G=0x31bf1ebd; S=0x31bf2449; 
@property(readonly, assign) int length;	// G=0x31bf12d1; 
@property(copy) NSString *method;	// G=0x31bf154d; S=0x31bf1ad9; 
@property(copy) NSString *name;	// G=0x31bf138d; S=0x31bf170d; 
@property(assign) BOOL noValidate;	// G=0x31bf2019; S=0x31bf20e1; converted property
@property(copy) NSString *target;	// G=0x31bf162d; S=0x31bf1c1d; 
// declared property getter: - (id)acceptCharset;	// 0x31bf146d
// declared property getter: - (id)action;	// 0x31bf21b9
// converted property getter: - (id)autocapitalize;	// 0x31bf2709
// converted property getter: - (BOOL)autocorrect;	// 0x31bf2581
- (BOOL)checkValidity;	// 0x31bf2a85
// declared property getter: - (id)elements;	// 0x31bf1189
// declared property getter: - (id)encoding;	// 0x31bf1d61
// declared property getter: - (id)enctype;	// 0x31bf1ebd
// declared property getter: - (int)length;	// 0x31bf12d1
// declared property getter: - (id)method;	// 0x31bf154d
// declared property getter: - (id)name;	// 0x31bf138d
// converted property getter: - (BOOL)noValidate;	// 0x31bf2019
- (void)reset;	// 0x31bf29cd
// declared property setter: - (void)setAcceptCharset:(id)charset;	// 0x31bf1851
// declared property setter: - (void)setAction:(id)action;	// 0x31bf1995
// converted property setter: - (void)setAutocapitalize:(id)autocapitalize;	// 0x31bf27dd
// converted property setter: - (void)setAutocorrect:(BOOL)autocorrect;	// 0x31bf263d
// declared property setter: - (void)setEncoding:(id)encoding;	// 0x31bf2311
// declared property setter: - (void)setEnctype:(id)enctype;	// 0x31bf2449
// declared property setter: - (void)setMethod:(id)method;	// 0x31bf1ad9
// declared property setter: - (void)setName:(id)name;	// 0x31bf170d
// converted property setter: - (void)setNoValidate:(BOOL)validate;	// 0x31bf20e1
// declared property setter: - (void)setTarget:(id)target;	// 0x31bf1c1d
- (int)structuralComplexityContribution;	// 0x31c2857d
- (void)submit;	// 0x31bf2915
// declared property getter: - (id)target;	// 0x31bf162d
@end

