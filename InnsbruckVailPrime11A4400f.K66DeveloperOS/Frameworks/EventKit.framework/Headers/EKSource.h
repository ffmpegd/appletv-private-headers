/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"

@class EKSourceConstraints, NSNumber, NSString, NSSet;

@interface EKSource : EKObject {
}
@property(readonly, assign, nonatomic) NSSet *allCalendars;	// G=0x2dae092d; 
@property(readonly, assign, nonatomic) NSSet *calendars;	// G=0x2dae0815; 
@property(readonly, assign, nonatomic) EKSourceConstraints *constraints;	// G=0x2da88bad; 
@property(copy, nonatomic) NSNumber *defaultAlarmOffset;	// G=0x2da99b71; S=0x2dae06c9; 
@property(readonly, assign, nonatomic) int displayOrderForNewCalendar;	// G=0x2dae0a45; 
@property(readonly, assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x2da8da95; 
@property(copy, nonatomic) NSString *externalID;	// G=0x2da94329; S=0x2dae06e5; 
@property(copy, nonatomic) NSString *externalModificationTag;	// G=0x2dae0701; S=0x2dae071d; 
@property(readonly, assign, nonatomic) BOOL isFacebookSource;	// G=0x2da90561; 
@property(assign, nonatomic) BOOL onlyCreatorCanModify;	// G=0x2dae0739; S=0x2dae07d1; 
@property(readonly, assign, nonatomic) NSString *sourceIdentifier;	// G=0x2da88ae1; 
@property(readonly, assign, nonatomic) int sourceType;	// G=0x2da90499; 
@property(copy, nonatomic) NSString *title;	// G=0x2dae0661; S=0x2dae06ad; 
+ (id)sourceWithEventStore:(id)eventStore;	// 0x2dae0539
- (id)init;	// 0x2dae05c5
- (id)_persistentItem;	// 0x2da90535
// declared property getter: - (id)allCalendars;	// 0x2dae092d
// declared property getter: - (id)calendars;	// 0x2dae0815
- (id)calendarsForEntityType:(unsigned)entityType;	// 0x2da8db05
- (BOOL)commit:(id *)commit;	// 0x2dae0bdd
// declared property getter: - (id)constraints;	// 0x2da88bad
// declared property getter: - (id)defaultAlarmOffset;	// 0x2da99b71
- (id)description;	// 0x2dae0b21
// declared property getter: - (int)displayOrderForNewCalendar;	// 0x2dae0a45
// declared property getter: - (id)externalID;	// 0x2da94329
// declared property getter: - (id)externalModificationTag;	// 0x2dae0701
// declared property getter: - (BOOL)isEnabled;	// 0x2da8da95
// declared property getter: - (BOOL)isFacebookSource;	// 0x2da90561
// declared property getter: - (BOOL)onlyCreatorCanModify;	// 0x2dae0739
- (id)readWriteCalendarsForEntityType:(unsigned)entityType;	// 0x2da9600d
- (BOOL)remove:(id *)remove;	// 0x2dae0c15
// declared property setter: - (void)setDefaultAlarmOffset:(id)offset;	// 0x2dae06c9
// declared property setter: - (void)setExternalID:(id)anId;	// 0x2dae06e5
// declared property setter: - (void)setExternalModificationTag:(id)tag;	// 0x2dae071d
// declared property setter: - (void)setOnlyCreatorCanModify:(BOOL)modify;	// 0x2dae07d1
// declared property setter: - (void)setTitle:(id)title;	// 0x2dae06ad
// declared property getter: - (id)sourceIdentifier;	// 0x2da88ae1
// declared property getter: - (int)sourceType;	// 0x2da90499
// declared property getter: - (id)title;	// 0x2dae0661
@end

