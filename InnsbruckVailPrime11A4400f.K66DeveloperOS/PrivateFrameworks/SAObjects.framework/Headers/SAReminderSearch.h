/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainCommand.h"

@class NSDate, NSNumber, NSString;

@interface SAReminderSearch : SADomainCommand {
}
@property(copy, nonatomic) NSNumber *completionStatus;	// G=0x326bbc7d; S=0x326bbc99; 
@property(copy, nonatomic) NSDate *dueAfter;	// G=0x326bbce9; S=0x326bbd05; 
@property(copy, nonatomic) NSDate *dueBefore;	// G=0x326bbd55; S=0x326bbd71; 
@property(copy, nonatomic) NSString *listName;	// G=0x326bbdc1; S=0x326bbddd; 
@property(copy, nonatomic) NSString *subject;	// G=0x326bbe2d; S=0x326bbe49; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x326bbe99; S=0x326bbeb5; 
+ (id)search;	// 0x326bbbed
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x326bbc31
// declared property getter: - (id)completionStatus;	// 0x326bbc7d
// declared property getter: - (id)dueAfter;	// 0x326bbce9
// declared property getter: - (id)dueBefore;	// 0x326bbd55
- (id)encodedClassName;	// 0x326bbbe1
- (id)groupIdentifier;	// 0x326bbbd1
// declared property getter: - (id)listName;	// 0x326bbdc1
- (BOOL)requiresResponse;	// 0x326bbf05
// declared property setter: - (void)setCompletionStatus:(id)status;	// 0x326bbc99
// declared property setter: - (void)setDueAfter:(id)after;	// 0x326bbd05
// declared property setter: - (void)setDueBefore:(id)before;	// 0x326bbd71
// declared property setter: - (void)setListName:(id)name;	// 0x326bbddd
// declared property setter: - (void)setSubject:(id)subject;	// 0x326bbe49
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x326bbeb5
// declared property getter: - (id)subject;	// 0x326bbe2d
// declared property getter: - (id)timeZoneId;	// 0x326bbe99
@end

