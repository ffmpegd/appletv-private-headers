/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class SAReminderRecurrence, NSString, NSArray, SAReminderTrigger, NSDate;
@protocol SAReminderPayload;

@interface SAReminderObject : SADomainObject {
}
@property(copy, nonatomic) NSString *alternateSubject;	// G=0x32f45c39; S=0x32f45c55; 
@property(assign, nonatomic) BOOL completed;	// G=0x32f45ca5; S=0x32f45d1d; 
@property(copy, nonatomic) NSDate *dueDate;	// G=0x32f45d61; S=0x32f45d7d; 
@property(copy, nonatomic) NSString *dueDateTimeZoneId;	// G=0x32f45dcd; S=0x32f45de9; 
@property(assign, nonatomic) BOOL important;	// G=0x32f45e39; S=0x32f45eb1; 
@property(copy, nonatomic) NSArray *lists;	// G=0x32f45ef5; S=0x32f45f71; 
@property(retain, nonatomic) id<SAReminderPayload> payload;	// G=0x32f45fd9; S=0x32f4602d; 
@property(retain, nonatomic) SAReminderRecurrence *recurrence;	// G=0x32f46069; S=0x32f460bd; 
@property(copy, nonatomic) NSString *subject;	// G=0x32f460f9; S=0x32f46115; 
@property(retain, nonatomic) SAReminderTrigger *trigger;	// G=0x32f46165; S=0x32f461b9; 
+ (id)object;	// 0x32f45ba9
+ (id)objectWithDictionary:(id)dictionary context:(id)context;	// 0x32f45bed
// declared property getter: - (id)alternateSubject;	// 0x32f45c39
// declared property getter: - (BOOL)completed;	// 0x32f45ca5
// declared property getter: - (id)dueDate;	// 0x32f45d61
// declared property getter: - (id)dueDateTimeZoneId;	// 0x32f45dcd
- (id)encodedClassName;	// 0x32f45b9d
- (id)groupIdentifier;	// 0x32f45b8d
// declared property getter: - (BOOL)important;	// 0x32f45e39
// declared property getter: - (id)lists;	// 0x32f45ef5
// declared property getter: - (id)payload;	// 0x32f45fd9
// declared property getter: - (id)recurrence;	// 0x32f46069
// declared property setter: - (void)setAlternateSubject:(id)subject;	// 0x32f45c55
// declared property setter: - (void)setCompleted:(BOOL)completed;	// 0x32f45d1d
// declared property setter: - (void)setDueDate:(id)date;	// 0x32f45d7d
// declared property setter: - (void)setDueDateTimeZoneId:(id)anId;	// 0x32f45de9
// declared property setter: - (void)setImportant:(BOOL)important;	// 0x32f45eb1
// declared property setter: - (void)setLists:(id)lists;	// 0x32f45f71
// declared property setter: - (void)setPayload:(id)payload;	// 0x32f4602d
// declared property setter: - (void)setRecurrence:(id)recurrence;	// 0x32f460bd
// declared property setter: - (void)setSubject:(id)subject;	// 0x32f46115
// declared property setter: - (void)setTrigger:(id)trigger;	// 0x32f461b9
// declared property getter: - (id)subject;	// 0x32f460f9
// declared property getter: - (id)trigger;	// 0x32f46165
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x32f461f5
@end

