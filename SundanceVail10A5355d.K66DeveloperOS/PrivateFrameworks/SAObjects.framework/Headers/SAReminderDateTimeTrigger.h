/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAReminderTrigger.h"

@class NSString, SAReminderDateTimeTriggerOffset, NSDate;

@interface SAReminderDateTimeTrigger : SAReminderTrigger {
}
@property(copy, nonatomic) NSDate *date;	// G=0x36616815; S=0x36616831; 
@property(retain, nonatomic) SAReminderDateTimeTriggerOffset *offset;	// G=0x36616881; S=0x366168d5; 
@property(retain, nonatomic) SAReminderDateTimeTriggerOffset *relativeTimeOffset;	// G=0x36616911; S=0x36616965; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x366169a1; S=0x366169bd; 
+ (id)dateTimeTrigger;	// 0x36616785
+ (id)dateTimeTriggerWithDictionary:(id)dictionary context:(id)context;	// 0x366167c9
// declared property getter: - (id)date;	// 0x36616815
- (id)encodedClassName;	// 0x36616779
- (id)groupIdentifier;	// 0x36616769
// declared property getter: - (id)offset;	// 0x36616881
// declared property getter: - (id)relativeTimeOffset;	// 0x36616911
// declared property setter: - (void)setDate:(id)date;	// 0x36616831
// declared property setter: - (void)setOffset:(id)offset;	// 0x366168d5
// declared property setter: - (void)setRelativeTimeOffset:(id)offset;	// 0x36616965
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x366169bd
// declared property getter: - (id)timeZoneId;	// 0x366169a1
@end
