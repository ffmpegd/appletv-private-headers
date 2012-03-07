/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "CalDAV-Structs.h"

@class NSSet, NSString;

@interface CalDAVServerVersion : NSObject <NSCopying> {
@private
	double _version;	// 4 = 0x4
	BOOL _supportsTimeRangeFilter;	// 12 = 0xc
	BOOL _supportsTodoTimeRangeFilter;	// 13 = 0xd
	BOOL _supportsTimeRangeFilterWithoutEndDate;	// 14 = 0xe
	BOOL _supportsTimeRangeFilterOnInbox;	// 15 = 0xf
	BOOL _supportsAutoSchedule;	// 16 = 0x10
	BOOL _supportsPrivateComments;	// 17 = 0x11
	BOOL _supportsSharing;	// 18 = 0x12
	BOOL _supportsSharingNoScheduling;	// 19 = 0x13
	BOOL _supportsCalendarProxy;	// 20 = 0x14
	BOOL _supportsInboxAvailability;	// 21 = 0x15
	BOOL _supportsPrivateEvents;	// 22 = 0x16
	BOOL _supportsSubscriptionCalendars;	// 23 = 0x17
	BOOL _supportsPrincipalPropertySearch;	// 24 = 0x18
	BOOL _supportsExtendedCalendarQuery;	// 25 = 0x19
	BOOL _supportsRequestCompression;	// 26 = 0x1a
	NSSet *_complianceClasses;	// 28 = 0x1c
}
@property(retain, nonatomic) NSSet *complianceClasses;	// G=0x359666a9; S=0x35967ba9; @synthesize=_complianceClasses
@property(assign, nonatomic) BOOL supportsAutoSchedule;	// G=0x359667b9; S=0x359667c9; @synthesize=_supportsAutoSchedule
@property(assign, nonatomic) BOOL supportsCalendarProxy;	// G=0x35966739; S=0x35966749; @synthesize=_supportsCalendarProxy
@property(assign, nonatomic) BOOL supportsExtendedCalendarQuery;	// G=0x35966689; S=0x35966699; @synthesize=_supportsExtendedCalendarQuery
@property(assign, nonatomic) BOOL supportsInboxAvailability;	// G=0x35966719; S=0x35966729; @synthesize=_supportsInboxAvailability
@property(assign, nonatomic) BOOL supportsPrincipalPropertySearch;	// G=0x359666b9; S=0x359666c9; @synthesize=_supportsPrincipalPropertySearch
@property(assign, nonatomic) BOOL supportsPrivateComments;	// G=0x35966799; S=0x359667a9; @synthesize=_supportsPrivateComments
@property(assign, nonatomic) BOOL supportsPrivateEvents;	// G=0x359666f9; S=0x35966709; @synthesize=_supportsPrivateEvents
@property(assign, nonatomic) BOOL supportsRequestCompression;	// G=0x35966669; S=0x35966679; @synthesize=_supportsRequestCompression
@property(assign, nonatomic) BOOL supportsSharing;	// G=0x35966779; S=0x35966789; @synthesize=_supportsSharing
@property(assign, nonatomic) BOOL supportsSharingNoScheduling;	// G=0x35966759; S=0x35966769; @synthesize=_supportsSharingNoScheduling
@property(assign, nonatomic) BOOL supportsSubscriptionCalendars;	// G=0x359666d9; S=0x359666e9; @synthesize=_supportsSubscriptionCalendars
@property(assign, nonatomic) BOOL supportsTimeRangeFilter;	// G=0x35966839; S=0x35966849; @synthesize=_supportsTimeRangeFilter
@property(assign, nonatomic) BOOL supportsTimeRangeFilterOnInbox;	// G=0x359667d9; S=0x359667e9; @synthesize=_supportsTimeRangeFilterOnInbox
@property(assign, nonatomic) BOOL supportsTimeRangeFilterWithoutEndDate;	// G=0x359667f9; S=0x35966809; @synthesize=_supportsTimeRangeFilterWithoutEndDate
@property(assign, nonatomic) BOOL supportsTodoTimeRangeFilter;	// G=0x35966819; S=0x35966829; @synthesize=_supportsTodoTimeRangeFilter
@property(readonly, assign, nonatomic) NSString *type;	// G=0x3596665d; 
@property(assign, nonatomic) double version;	// G=0x35966859; S=0x35966871; @synthesize=_version
+ (id)_prototypeMatchingServerHeaders:(id)headers;	// 0x35967921
+ (id)versionWithHTTPHeaders:(id)httpheaders;	// 0x359677b9
+ (id)versionWithPropertyValue:(id)propertyValue;	// 0x359673ad
- (id)init;	// 0x35968031
- (id)_additionalFlagKeys;	// 0x35966ea5
- (id)_allFlagKeys;	// 0x359680c5
- (id)_propertiesToComplianceClasses;	// 0x35968125
- (void)_setPropertiesFromComplianceClasses:(id)complianceClasses;	// 0x35966f71
// declared property getter: - (id)complianceClasses;	// 0x359666a9
- (id)copyWithZone:(NSZone *)zone;	// 0x35967edd
- (void)dealloc;	// 0x35967361
- (id)description;	// 0x35967bd1
- (unsigned)hash;	// 0x359670cd
- (BOOL)isEqual:(id)equal;	// 0x35967d45
- (id)propertyValue;	// 0x3596712d
// declared property setter: - (void)setComplianceClasses:(id)classes;	// 0x35967ba9
// declared property setter: - (void)setSupportsAutoSchedule:(BOOL)schedule;	// 0x359667c9
// declared property setter: - (void)setSupportsCalendarProxy:(BOOL)proxy;	// 0x35966749
// declared property setter: - (void)setSupportsExtendedCalendarQuery:(BOOL)query;	// 0x35966699
// declared property setter: - (void)setSupportsInboxAvailability:(BOOL)availability;	// 0x35966729
// declared property setter: - (void)setSupportsPrincipalPropertySearch:(BOOL)search;	// 0x359666c9
// declared property setter: - (void)setSupportsPrivateComments:(BOOL)comments;	// 0x359667a9
// declared property setter: - (void)setSupportsPrivateEvents:(BOOL)events;	// 0x35966709
// declared property setter: - (void)setSupportsRequestCompression:(BOOL)compression;	// 0x35966679
// declared property setter: - (void)setSupportsSharing:(BOOL)sharing;	// 0x35966789
// declared property setter: - (void)setSupportsSharingNoScheduling:(BOOL)scheduling;	// 0x35966769
// declared property setter: - (void)setSupportsSubscriptionCalendars:(BOOL)calendars;	// 0x359666e9
// declared property setter: - (void)setSupportsTimeRangeFilter:(BOOL)filter;	// 0x35966849
// declared property setter: - (void)setSupportsTimeRangeFilterOnInbox:(BOOL)inbox;	// 0x359667e9
// declared property setter: - (void)setSupportsTimeRangeFilterWithoutEndDate:(BOOL)date;	// 0x35966809
// declared property setter: - (void)setSupportsTodoTimeRangeFilter:(BOOL)filter;	// 0x35966829
// declared property setter: - (void)setVersion:(double)version;	// 0x35966871
// declared property getter: - (BOOL)supportsAutoSchedule;	// 0x359667b9
// declared property getter: - (BOOL)supportsCalendarProxy;	// 0x35966739
// declared property getter: - (BOOL)supportsExtendedCalendarQuery;	// 0x35966689
// declared property getter: - (BOOL)supportsInboxAvailability;	// 0x35966719
// declared property getter: - (BOOL)supportsPrincipalPropertySearch;	// 0x359666b9
// declared property getter: - (BOOL)supportsPrivateComments;	// 0x35966799
// declared property getter: - (BOOL)supportsPrivateEvents;	// 0x359666f9
// declared property getter: - (BOOL)supportsRequestCompression;	// 0x35966669
// declared property getter: - (BOOL)supportsSharing;	// 0x35966779
// declared property getter: - (BOOL)supportsSharingNoScheduling;	// 0x35966759
// declared property getter: - (BOOL)supportsSubscriptionCalendars;	// 0x359666d9
// declared property getter: - (BOOL)supportsTimeRangeFilter;	// 0x35966839
// declared property getter: - (BOOL)supportsTimeRangeFilterOnInbox;	// 0x359667d9
// declared property getter: - (BOOL)supportsTimeRangeFilterWithoutEndDate;	// 0x359667f9
// declared property getter: - (BOOL)supportsTodoTimeRangeFilter;	// 0x35966819
// declared property getter: - (id)type;	// 0x3596665d
// declared property getter: - (double)version;	// 0x35966859
@end

