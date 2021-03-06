/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"
#import "WebCore-Structs.h"

@class DOMFileList, NSURL, NSString, DOMHTMLFormElement;

@interface DOMHTMLInputElement : DOMHTMLElement {
}
@property(readonly, copy) NSURL *absoluteImageURL;	// G=0x33f9499d; 
@property(copy) NSString *accept;	// G=0x33f92c31; S=0x33f92d65; 
@property(copy) NSString *accessKey;	// G=0x33f92e7d; S=0x33f92fb1; 
@property(copy) NSString *align;	// G=0x33f930c9; S=0x33f931fd; 
@property(copy) NSString *alt;	// G=0x33f93315; S=0x33f93449; 
@property(readonly, copy) NSString *altDisplayString;	// G=0x33f947d5; 
@property(assign) BOOL autocapitalize;	// G=0x33f94a39; S=0x33f94a55; converted property
@property(assign) BOOL autocorrect;	// G=0x33f949f9; S=0x33f94a15; converted property
@property(assign) BOOL autofocus;	// G=0x33f92259; S=0x33f93585; 
@property(assign) BOOL checked;	// G=0x33f921f9; S=0x33f93561; 
@property(assign) BOOL defaultChecked;	// G=0x33f92b79; S=0x33f92b95; 
@property(copy) NSString *defaultValue;	// G=0x33f9234d; S=0x33f92a61; 
@property(assign) BOOL disabled;	// G=0x33f92211; S=0x33f92231; 
@property(readonly, retain) DOMFileList *files;	// G=0x33f949dd; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x33f92bb9; 
@property(assign) BOOL formNoValidate;	// G=0x33f92bd5; S=0x33f92bf1; converted property
@property(assign) BOOL indeterminate;	// G=0x33f922b9; S=0x33f94749; 
@property(retain) id max;	// G=0x33f935a9; S=0x33f93679; converted property
@property(assign) int maxLength;	// G=0x33f93b09; S=0x33f93b21; 
@property(retain) id min;	// G=0x33f935dd; S=0x33f9379d; converted property
@property(assign) BOOL multiple;	// G=0x33f93b55; S=0x33f93b71; 
@property(copy) NSString *name;	// G=0x33f922ed; S=0x33f93b95; 
@property(retain) id pattern;	// G=0x33f93611; S=0x33f938c1; converted property
@property(retain) id placeholder;	// G=0x33f92481; S=0x33f926f1; converted property
@property(assign) BOOL readOnly;	// G=0x33f92279; S=0x33f93cad; 
@property(assign) BOOL required;	// G=0x33f93cd1; S=0x33f93ced; converted property
@property(assign) int selectionEnd;	// G=0x33f947a1; S=0x33f947b9; 
@property(assign) int selectionStart;	// G=0x33f9476d; S=0x33f94785; 
@property(copy) NSString *size;	// G=0x33f93d11; S=0x33f93e4d; 
@property(copy) NSString *src;	// G=0x33f93f75; S=0x33f940a9; 
@property(retain) id step;	// G=0x33f93645; S=0x33f939e5; converted property
@property(copy) NSString *type;	// G=0x33f9231d; S=0x33f941c1; 
@property(copy) NSString *useMap;	// G=0x33f942d9; S=0x33f9440d; 
@property(copy) NSString *value;	// G=0x33f925b9; S=0x33f92815; 
@property(assign) double valueAsDate;	// G=0x33f94525; S=0x33f94565; converted property
@property(assign) double valueAsNumber;	// G=0x33f945c1; S=0x33f945d9; converted property
@property(readonly, assign) BOOL willValidate;	// G=0x33f92299; 
- (BOOL)_isAutofilled;	// 0x33f82cb9
- (BOOL)_isEdited;	// 0x33f82ccd
- (BOOL)_isTextField;	// 0x33f82ca5
- (void)_replaceCharactersInRange:(NSRange)range withString:(id)string selectingFromIndex:(int)index;	// 0x33f82d05
- (NSRange)_selectedRange;	// 0x33f82eed
- (void)_setAutofilled:(BOOL)autofilled;	// 0x33f82f1d
// declared property getter: - (id)absoluteImageURL;	// 0x33f9499d
// declared property getter: - (id)accept;	// 0x33f92c31
// declared property getter: - (id)accessKey;	// 0x33f92e7d
// declared property getter: - (id)align;	// 0x33f930c9
// declared property getter: - (id)alt;	// 0x33f93315
// declared property getter: - (id)altDisplayString;	// 0x33f947d5
// converted property getter: - (BOOL)autocapitalize;	// 0x33f94a39
// converted property getter: - (BOOL)autocorrect;	// 0x33f949f9
// declared property getter: - (BOOL)autofocus;	// 0x33f92259
- (BOOL)checkValidity;	// 0x33f94ae1
// declared property getter: - (BOOL)checked;	// 0x33f921f9
- (void)click;	// 0x33f94c15
// declared property getter: - (BOOL)defaultChecked;	// 0x33f92b79
// declared property getter: - (id)defaultValue;	// 0x33f9234d
// declared property getter: - (BOOL)disabled;	// 0x33f92211
// declared property getter: - (id)files;	// 0x33f949dd
// declared property getter: - (id)form;	// 0x33f92bb9
// converted property getter: - (BOOL)formNoValidate;	// 0x33f92bd5
// declared property getter: - (BOOL)indeterminate;	// 0x33f922b9
// converted property getter: - (id)max;	// 0x33f935a9
// declared property getter: - (int)maxLength;	// 0x33f93b09
// converted property getter: - (id)min;	// 0x33f935dd
// declared property getter: - (BOOL)multiple;	// 0x33f93b55
// declared property getter: - (id)name;	// 0x33f922ed
// converted property getter: - (id)pattern;	// 0x33f93611
// converted property getter: - (id)placeholder;	// 0x33f92481
// declared property getter: - (BOOL)readOnly;	// 0x33f92279
// converted property getter: - (BOOL)required;	// 0x33f93cd1
- (void)select;	// 0x33f922d1
// declared property getter: - (int)selectionEnd;	// 0x33f947a1
// declared property getter: - (int)selectionStart;	// 0x33f9476d
// declared property setter: - (void)setAccept:(id)accept;	// 0x33f92d65
// declared property setter: - (void)setAccessKey:(id)key;	// 0x33f92fb1
// declared property setter: - (void)setAlign:(id)align;	// 0x33f931fd
// declared property setter: - (void)setAlt:(id)alt;	// 0x33f93449
// converted property setter: - (void)setAutocapitalize:(BOOL)autocapitalize;	// 0x33f94a55
// converted property setter: - (void)setAutocorrect:(BOOL)autocorrect;	// 0x33f94a15
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x33f93585
// declared property setter: - (void)setChecked:(BOOL)checked;	// 0x33f93561
- (void)setCustomValidity:(id)validity;	// 0x33f94afd
// declared property setter: - (void)setDefaultChecked:(BOOL)checked;	// 0x33f92b95
// declared property setter: - (void)setDefaultValue:(id)value;	// 0x33f92a61
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x33f92231
// converted property setter: - (void)setFormNoValidate:(BOOL)validate;	// 0x33f92bf1
// declared property setter: - (void)setIndeterminate:(BOOL)indeterminate;	// 0x33f94749
// converted property setter: - (void)setMax:(id)max;	// 0x33f93679
// declared property setter: - (void)setMaxLength:(int)length;	// 0x33f93b21
// converted property setter: - (void)setMin:(id)min;	// 0x33f9379d
// declared property setter: - (void)setMultiple:(BOOL)multiple;	// 0x33f93b71
// declared property setter: - (void)setName:(id)name;	// 0x33f93b95
// converted property setter: - (void)setPattern:(id)pattern;	// 0x33f938c1
// converted property setter: - (void)setPlaceholder:(id)placeholder;	// 0x33f926f1
// declared property setter: - (void)setReadOnly:(BOOL)only;	// 0x33f93cad
// converted property setter: - (void)setRequired:(BOOL)required;	// 0x33f93ced
// declared property setter: - (void)setSelectionEnd:(int)end;	// 0x33f947b9
- (void)setSelectionRange:(int)range end:(int)end;	// 0x33f94c2d
// declared property setter: - (void)setSelectionStart:(int)start;	// 0x33f94785
// declared property setter: - (void)setSize:(id)size;	// 0x33f93e4d
// declared property setter: - (void)setSrc:(id)src;	// 0x33f940a9
// converted property setter: - (void)setStep:(id)step;	// 0x33f939e5
// declared property setter: - (void)setType:(id)type;	// 0x33f941c1
// declared property setter: - (void)setUseMap:(id)map;	// 0x33f9440d
// declared property setter: - (void)setValue:(id)value;	// 0x33f92815
// converted property setter: - (void)setValueAsDate:(double)date;	// 0x33f94565
// converted property setter: - (void)setValueAsNumber:(double)number;	// 0x33f945d9
- (void)setValueForUser:(id)user;	// 0x33f9293d
// declared property getter: - (id)size;	// 0x33f93d11
// declared property getter: - (id)src;	// 0x33f93f75
// converted property getter: - (id)step;	// 0x33f93645
- (void)stepDown:(int)down;	// 0x33f94aad
- (void)stepUp:(int)up;	// 0x33f94a79
- (int)structuralComplexityContribution;	// 0x33faf335
// declared property getter: - (id)type;	// 0x33f9231d
// declared property getter: - (id)useMap;	// 0x33f942d9
- (id)validationMessage;	// 0x33f94615
- (id)validity;	// 0x33f92c15
// declared property getter: - (id)value;	// 0x33f925b9
// converted property getter: - (double)valueAsDate;	// 0x33f94525
// converted property getter: - (double)valueAsNumber;	// 0x33f945c1
// declared property getter: - (BOOL)willValidate;	// 0x33f92299
@end

