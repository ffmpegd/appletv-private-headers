/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSArray;

@interface SAUIConfirmationOptions : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *cancelCommands;	// G=0x32f3472d; S=0x32f34795; 
@property(copy, nonatomic) NSString *cancelLabel;	// G=0x32f347fd; S=0x32f34819; 
@property(copy, nonatomic) NSString *cancelTrigger;	// G=0x32f34869; S=0x32f34885; 
@property(copy, nonatomic) NSArray *confirmCommands;	// G=0x32f348d5; S=0x32f3493d; 
@property(copy, nonatomic) NSString *confirmText;	// G=0x32f349a5; S=0x32f349c1; 
@property(copy, nonatomic) NSArray *denyCommands;	// G=0x32f34a11; S=0x32f34a79; 
@property(copy, nonatomic) NSString *denyText;	// G=0x32f34ae1; S=0x32f34afd; 
@property(copy, nonatomic) NSArray *submitCommands;	// G=0x32f34b4d; S=0x32f34bb5; 
@property(copy, nonatomic) NSString *submitLabel;	// G=0x32f34c1d; S=0x32f34c39; 
+ (id)confirmationOptions;	// 0x32f3469d
+ (id)confirmationOptionsWithDictionary:(id)dictionary context:(id)context;	// 0x32f346e1
// declared property getter: - (id)cancelCommands;	// 0x32f3472d
// declared property getter: - (id)cancelLabel;	// 0x32f347fd
// declared property getter: - (id)cancelTrigger;	// 0x32f34869
// declared property getter: - (id)confirmCommands;	// 0x32f348d5
// declared property getter: - (id)confirmText;	// 0x32f349a5
// declared property getter: - (id)denyCommands;	// 0x32f34a11
// declared property getter: - (id)denyText;	// 0x32f34ae1
- (id)encodedClassName;	// 0x32f34691
- (id)groupIdentifier;	// 0x32f34681
// declared property setter: - (void)setCancelCommands:(id)commands;	// 0x32f34795
// declared property setter: - (void)setCancelLabel:(id)label;	// 0x32f34819
// declared property setter: - (void)setCancelTrigger:(id)trigger;	// 0x32f34885
// declared property setter: - (void)setConfirmCommands:(id)commands;	// 0x32f3493d
// declared property setter: - (void)setConfirmText:(id)text;	// 0x32f349c1
// declared property setter: - (void)setDenyCommands:(id)commands;	// 0x32f34a79
// declared property setter: - (void)setDenyText:(id)text;	// 0x32f34afd
// declared property setter: - (void)setSubmitCommands:(id)commands;	// 0x32f34bb5
// declared property setter: - (void)setSubmitLabel:(id)label;	// 0x32f34c39
// declared property getter: - (id)submitCommands;	// 0x32f34b4d
// declared property getter: - (id)submitLabel;	// 0x32f34c1d
@end

