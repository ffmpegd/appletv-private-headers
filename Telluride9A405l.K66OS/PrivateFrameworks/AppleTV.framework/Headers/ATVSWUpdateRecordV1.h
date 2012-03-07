/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSWUpdateRecord.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVSWUpdateRecordV1 : ATVSWUpdateRecord {
@private
	BOOL _SIImageValid;	// 34 = 0x22
	NSString *_mediaUpdateURL;	// 36 = 0x24
}
@property(readonly, retain) NSString *mediaUpdateURL;	// G=0x35d2305d; converted property
- (id)init;	// 0x35d22fb5
- (void)_collectCurrentVersions;	// 0x35d237e5
- (BOOL)_currentVersionsMeetPrerequisites:(id)prerequisites;	// 0x35d23875
- (void)_parseVersionData:(id)data;	// 0x35d2306d
- (void)dealloc;	// 0x35d23011
// converted property getter: - (id)mediaUpdateURL;	// 0x35d2305d
@end

