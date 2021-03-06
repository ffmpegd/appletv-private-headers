/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"
#import "WebCore-Structs.h"

@class NSString, DOMHTMLFormElement, NSURL, DOMFileList;

@interface DOMHTMLInputElement : DOMHTMLElement {
}
@property(readonly, assign) NSURL *absoluteImageURL;	// G=0x30d4519d; 
@property(copy) NSString *accept;	// G=0x30d3e071; S=0x30d3e195; 
@property(copy) NSString *accessKey;	// G=0x30d44c51; S=0x30d44d75; 
@property(copy) NSString *align;	// G=0x30d44481; S=0x30d445a5; 
@property(copy) NSString *alt;	// G=0x30d3e349; S=0x30d3e46d; 
@property(readonly, assign) NSString *altDisplayString;	// G=0x30d44f29; 
@property(retain) id autocapitalize;	// G=0x30d454d5; S=0x30d455ed; converted property
@property(retain) id autocomplete;	// G=0x30d3e621; S=0x30d3e745; converted property
@property(assign) BOOL autocorrect;	// G=0x30d452cd; S=0x30d453cd; converted property
@property(assign) BOOL autofocus;	// G=0x30d3e8f9; S=0x30d3ea05; 
@property(assign) BOOL checked;	// G=0x30d3ed39; S=0x30d3ed6d; 
@property(assign) BOOL defaultChecked;	// G=0x30d3eb19; S=0x30d3ec25; 
@property(copy) NSString *defaultValue;	// G=0x30d42b39; S=0x30d42cf5; 
@property(retain) id dirName;	// G=0x30d3ee75; S=0x30d3ef99; converted property
@property(assign) BOOL disabled;	// G=0x30d3f14d; S=0x30d3f259; 
@property(readonly, assign) DOMFileList *files;	// G=0x30d3f471; 
@property(readonly, assign) DOMHTMLFormElement *form;	// G=0x30d3f36d; 
@property(retain) id formAction;	// G=0x30d3f57d; S=0x30d3f745; converted property
@property(retain) id formEnctype;	// G=0x30d3f8f9; S=0x30d3fab5; converted property
@property(retain) id formMethod;	// G=0x30d3fc5d; S=0x30d3fe19; converted property
@property(assign) BOOL formNoValidate;	// G=0x30d3ffc1; S=0x30d400cd; converted property
@property(retain) id formTarget;	// G=0x30d401e1; S=0x30d40305; converted property
@property(assign) unsigned height;	// G=0x30d404b9; S=0x30d405b9; converted property
@property(assign) BOOL incremental;	// G=0x30d44a31; S=0x30d44b3d; converted property
@property(assign) BOOL indeterminate;	// G=0x30d406b9; S=0x30d406ed; 
@property(retain) id max;	// G=0x30d407f5; S=0x30d40919; converted property
@property(assign) int maxLength;	// G=0x30d40acd; S=0x30d40bd1; 
@property(retain) id min;	// G=0x30d40ce5; S=0x30d40e09; converted property
@property(assign) BOOL multiple;	// G=0x30d40fbd; S=0x30d410c9; 
@property(copy) NSString *name;	// G=0x30d411dd; S=0x30d41301; 
@property(retain) id pattern;	// G=0x30d414b5; S=0x30d415d9; converted property
@property(retain) id placeholder;	// G=0x30d4178d; S=0x30d418b1; converted property
@property(assign) BOOL readOnly;	// G=0x30d41a65; S=0x30d41b71; 
@property(assign) BOOL required;	// G=0x30d41c85; S=0x30d41d91; converted property
@property(retain) id selectionDirection;	// G=0x30d441c1; S=0x30d442d9; converted property
@property(assign) int selectionEnd;	// G=0x30d43fc1; S=0x30d440c1; 
@property(assign) int selectionStart;	// G=0x30d43dc1; S=0x30d43ec1; 
@property(copy) NSString *size;	// G=0x30d41ea5; S=0x30d4206d; 
@property(copy) NSString *src;	// G=0x30d42221; S=0x30d423e9; 
@property(retain) id step;	// G=0x30d4259d; S=0x30d426c1; converted property
@property(copy) NSString *type;	// G=0x30d42875; S=0x30d42991; 
@property(copy) NSString *useMap;	// G=0x30d44759; S=0x30d4487d; 
@property(copy) NSString *value;	// G=0x30d42e9d; S=0x30d4305d; 
@property(assign) double valueAsDate;	// G=0x30d43209; S=0x30d43331; converted property
@property(assign) double valueAsNumber;	// G=0x30d43471; S=0x30d43575; converted property
@property(assign) unsigned width;	// G=0x30d4368d; S=0x30d4378d; converted property
@property(readonly, assign) BOOL willValidate;	// G=0x30d4388d; 
- (int)_autocapitalizeType;	// 0x30d1d2a1
- (BOOL)_isAutofilled;	// 0x30d1d20d
- (BOOL)_isEdited;	// 0x30d1d281
- (BOOL)_isTextField;	// 0x30d1cfb1
- (void)_replaceCharactersInRange:(NSRange)range withString:(id)string selectingFromIndex:(int)index;	// 0x30d1cfc1
- (NSRange)_selectedRange;	// 0x30d1d1d9
- (void)_setAutofilled:(BOOL)autofilled;	// 0x30d1d21d
// declared property getter: - (id)absoluteImageURL;	// 0x30d4519d
// declared property getter: - (id)accept;	// 0x30d3e071
// declared property getter: - (id)accessKey;	// 0x30d44c51
// declared property getter: - (id)align;	// 0x30d44481
// declared property getter: - (id)alt;	// 0x30d3e349
// declared property getter: - (id)altDisplayString;	// 0x30d44f29
// converted property getter: - (id)autocapitalize;	// 0x30d454d5
// converted property getter: - (id)autocomplete;	// 0x30d3e621
// converted property getter: - (BOOL)autocorrect;	// 0x30d452cd
// declared property getter: - (BOOL)autofocus;	// 0x30d3e8f9
- (BOOL)checkValidity;	// 0x30d459bd
// declared property getter: - (BOOL)checked;	// 0x30d3ed39
- (void)click;	// 0x30d45e6d
// declared property getter: - (BOOL)defaultChecked;	// 0x30d3eb19
// declared property getter: - (id)defaultValue;	// 0x30d42b39
// converted property getter: - (id)dirName;	// 0x30d3ee75
// declared property getter: - (BOOL)disabled;	// 0x30d3f14d
// declared property getter: - (id)files;	// 0x30d3f471
// declared property getter: - (id)form;	// 0x30d3f36d
// converted property getter: - (id)formAction;	// 0x30d3f57d
// converted property getter: - (id)formEnctype;	// 0x30d3f8f9
// converted property getter: - (id)formMethod;	// 0x30d3fc5d
// converted property getter: - (BOOL)formNoValidate;	// 0x30d3ffc1
// converted property getter: - (id)formTarget;	// 0x30d401e1
// converted property getter: - (unsigned)height;	// 0x30d404b9
// converted property getter: - (BOOL)incremental;	// 0x30d44a31
// declared property getter: - (BOOL)indeterminate;	// 0x30d406b9
- (id)labels;	// 0x30d43c59
// converted property getter: - (id)max;	// 0x30d407f5
// declared property getter: - (int)maxLength;	// 0x30d40acd
// converted property getter: - (id)min;	// 0x30d40ce5
// declared property getter: - (BOOL)multiple;	// 0x30d40fbd
// declared property getter: - (id)name;	// 0x30d411dd
// converted property getter: - (id)pattern;	// 0x30d414b5
// converted property getter: - (id)placeholder;	// 0x30d4178d
// declared property getter: - (BOOL)readOnly;	// 0x30d41a65
// converted property getter: - (BOOL)required;	// 0x30d41c85
- (void)select;	// 0x30d45c69
// converted property getter: - (id)selectionDirection;	// 0x30d441c1
// declared property getter: - (int)selectionEnd;	// 0x30d43fc1
// declared property getter: - (int)selectionStart;	// 0x30d43dc1
// declared property setter: - (void)setAccept:(id)accept;	// 0x30d3e195
// declared property setter: - (void)setAccessKey:(id)key;	// 0x30d44d75
// declared property setter: - (void)setAlign:(id)align;	// 0x30d445a5
// declared property setter: - (void)setAlt:(id)alt;	// 0x30d3e46d
// converted property setter: - (void)setAutocapitalize:(id)autocapitalize;	// 0x30d455ed
// converted property setter: - (void)setAutocomplete:(id)autocomplete;	// 0x30d3e745
// converted property setter: - (void)setAutocorrect:(BOOL)autocorrect;	// 0x30d453cd
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x30d3ea05
// declared property setter: - (void)setChecked:(BOOL)checked;	// 0x30d3ed6d
- (void)setCustomValidity:(id)validity;	// 0x30d45ac1
// declared property setter: - (void)setDefaultChecked:(BOOL)checked;	// 0x30d3ec25
// declared property setter: - (void)setDefaultValue:(id)value;	// 0x30d42cf5
// converted property setter: - (void)setDirName:(id)name;	// 0x30d3ef99
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x30d3f259
// converted property setter: - (void)setFormAction:(id)action;	// 0x30d3f745
// converted property setter: - (void)setFormEnctype:(id)enctype;	// 0x30d3fab5
// converted property setter: - (void)setFormMethod:(id)method;	// 0x30d3fe19
// converted property setter: - (void)setFormNoValidate:(BOOL)validate;	// 0x30d400cd
// converted property setter: - (void)setFormTarget:(id)target;	// 0x30d40305
// converted property setter: - (void)setHeight:(unsigned)height;	// 0x30d405b9
// converted property setter: - (void)setIncremental:(BOOL)incremental;	// 0x30d44b3d
// declared property setter: - (void)setIndeterminate:(BOOL)indeterminate;	// 0x30d406ed
// converted property setter: - (void)setMax:(id)max;	// 0x30d40919
// declared property setter: - (void)setMaxLength:(int)length;	// 0x30d40bd1
// converted property setter: - (void)setMin:(id)min;	// 0x30d40e09
// declared property setter: - (void)setMultiple:(BOOL)multiple;	// 0x30d410c9
// declared property setter: - (void)setName:(id)name;	// 0x30d41301
// converted property setter: - (void)setPattern:(id)pattern;	// 0x30d415d9
// converted property setter: - (void)setPlaceholder:(id)placeholder;	// 0x30d418b1
// declared property setter: - (void)setReadOnly:(BOOL)only;	// 0x30d41b71
// converted property setter: - (void)setRequired:(BOOL)required;	// 0x30d41d91
// converted property setter: - (void)setSelectionDirection:(id)direction;	// 0x30d442d9
// declared property setter: - (void)setSelectionEnd:(int)end;	// 0x30d440c1
- (void)setSelectionRange:(int)range end:(int)end;	// 0x30d45d65
// declared property setter: - (void)setSelectionStart:(int)start;	// 0x30d43ec1
// declared property setter: - (void)setSize:(id)size;	// 0x30d4206d
// declared property setter: - (void)setSrc:(id)src;	// 0x30d423e9
// converted property setter: - (void)setStep:(id)step;	// 0x30d426c1
// declared property setter: - (void)setType:(id)type;	// 0x30d42991
// declared property setter: - (void)setUseMap:(id)map;	// 0x30d4487d
// declared property setter: - (void)setValue:(id)value;	// 0x30d4305d
// converted property setter: - (void)setValueAsDate:(double)date;	// 0x30d43331
// converted property setter: - (void)setValueAsNumber:(double)number;	// 0x30d43575
- (void)setValueAsNumberWithChangeEvent:(double)changeEvent;	// 0x30d1d465
- (void)setValueForUser:(id)user;	// 0x30d45f69
- (void)setValueWithChangeEvent:(id)changeEvent;	// 0x30d1d2c1
// converted property setter: - (void)setWidth:(unsigned)width;	// 0x30d4378d
// declared property getter: - (id)size;	// 0x30d41ea5
// declared property getter: - (id)src;	// 0x30d42221
// converted property getter: - (id)step;	// 0x30d4259d
- (void)stepDown:(int)down;	// 0x30d458a9
- (void)stepUp:(int)up;	// 0x30d45795
- (int)structuralComplexityContribution;	// 0x30d81cd9
// declared property getter: - (id)type;	// 0x30d42875
// declared property getter: - (id)useMap;	// 0x30d44759
- (id)validationMessage;	// 0x30d43a9d
- (id)validity;	// 0x30d43991
// declared property getter: - (id)value;	// 0x30d42e9d
// converted property getter: - (double)valueAsDate;	// 0x30d43209
// converted property getter: - (double)valueAsNumber;	// 0x30d43471
// converted property getter: - (unsigned)width;	// 0x30d4368d
// declared property getter: - (BOOL)willValidate;	// 0x30d4388d
@end

