/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSArray, NSString;

@interface CalAlarmMetadata : NSObject <NSCoding> {
	NSArray *_attach;	// 4 = 0x4
	NSArray *_attendee;	// 8 = 0x8
	NSString *_description;	// 12 = 0xc
	NSString *_summary;	// 16 = 0x10
}
@property(retain) NSArray *attach;	// G=0x3347bf81; S=0x3347bfe1; @synthesize=_attach
@property(retain) NSArray *attendee;	// G=0x3347bf99; S=0x3347c00d; @synthesize=_attendee
@property(retain) NSString *description;	// G=0x3347bfb1; S=0x3347c039; @synthesize=_description
@property(retain) NSString *summary;	// G=0x3347bfc9; S=0x3347c065; @synthesize=_summary
+ (id)metadataWithData:(id)data;	// 0x3347bda9
- (id)initWithCoder:(id)coder;	// 0x3347bc3d
- (id)initWithICSAlarm:(id)icsalarm;	// 0x3347bec5
- (void)applyToAlarm:(id)alarm;	// 0x3347bdc9
// declared property getter: - (id)attach;	// 0x3347bf81
// declared property getter: - (id)attendee;	// 0x3347bf99
- (id)dataRepresentation;	// 0x3347bd89
- (void)dealloc;	// 0x3347be45
// declared property getter: - (id)description;	// 0x3347bfb1
- (void)encodeWithCoder:(id)coder;	// 0x3347bd05
// declared property setter: - (void)setAttach:(id)attach;	// 0x3347bfe1
// declared property setter: - (void)setAttendee:(id)attendee;	// 0x3347c00d
// declared property setter: - (void)setDescription:(id)description;	// 0x3347c039
// declared property setter: - (void)setSummary:(id)summary;	// 0x3347c065
// declared property getter: - (id)summary;	// 0x3347bfc9
@end
