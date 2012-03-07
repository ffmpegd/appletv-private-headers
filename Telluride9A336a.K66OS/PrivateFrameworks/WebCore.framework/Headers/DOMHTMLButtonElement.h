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
@property(copy) NSString *accessKey;	// G=0x31be98b5; S=0x31be9249; 
@property(assign) BOOL autofocus;	// G=0x31be9ce5; S=0x31be9f5d; 
@property(assign) BOOL disabled;	// G=0x31be9c1d; S=0x31be9e85; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x31be8a4d; 
@property(retain) id formAction;	// G=0x31be8be1; S=0x31be8d39; converted property
@property(retain) id formEnctype;	// G=0x31be9615; S=0x31be8e7d; converted property
@property(retain) id formMethod;	// G=0x31be96f5; S=0x31be8fc1; converted property
@property(assign) BOOL formNoValidate;	// G=0x31be9b55; S=0x31be9dad; converted property
@property(retain) id formTarget;	// G=0x31be97d5; S=0x31be9105; converted property
@property(copy) NSString *name;	// G=0x31be9995; S=0x31be938d; 
@property(readonly, copy) NSString *type;	// G=0x31be8b09; 
@property(copy) NSString *value;	// G=0x31be9a75; S=0x31be94d1; 
@property(readonly, assign) BOOL willValidate;	// G=0x31be898d; 
// declared property getter: - (id)accessKey;	// 0x31be98b5
// declared property getter: - (BOOL)autofocus;	// 0x31be9ce5
- (BOOL)checkValidity;	// 0x31bea395
- (void)click;	// 0x31bea58d
// declared property getter: - (BOOL)disabled;	// 0x31be9c1d
// declared property getter: - (id)form;	// 0x31be8a4d
// converted property getter: - (id)formAction;	// 0x31be8be1
// converted property getter: - (id)formEnctype;	// 0x31be9615
// converted property getter: - (id)formMethod;	// 0x31be96f5
// converted property getter: - (BOOL)formNoValidate;	// 0x31be9b55
// converted property getter: - (id)formTarget;	// 0x31be97d5
- (id)labels;	// 0x31bea24d
// declared property getter: - (id)name;	// 0x31be9995
// declared property setter: - (void)setAccessKey:(id)key;	// 0x31be9249
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x31be9f5d
- (void)setCustomValidity:(id)validity;	// 0x31bea455
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x31be9e85
// converted property setter: - (void)setFormAction:(id)action;	// 0x31be8d39
// converted property setter: - (void)setFormEnctype:(id)enctype;	// 0x31be8e7d
// converted property setter: - (void)setFormMethod:(id)method;	// 0x31be8fc1
// converted property setter: - (void)setFormNoValidate:(BOOL)validate;	// 0x31be9dad
// converted property setter: - (void)setFormTarget:(id)target;	// 0x31be9105
// declared property setter: - (void)setName:(id)name;	// 0x31be938d
// declared property setter: - (void)setValue:(id)value;	// 0x31be94d1
- (int)structuralComplexityContribution;	// 0x31c2859d
// declared property getter: - (id)type;	// 0x31be8b09
- (id)validationMessage;	// 0x31bea101
- (id)validity;	// 0x31bea035
// declared property getter: - (id)value;	// 0x31be9a75
// declared property getter: - (BOOL)willValidate;	// 0x31be898d
@end

