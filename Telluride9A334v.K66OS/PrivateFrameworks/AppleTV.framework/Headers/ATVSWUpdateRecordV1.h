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
@property(readonly, retain) NSString *mediaUpdateURL;	// G=0x33128dbd; converted property
- (id)init;	// 0x33128d15
- (void)_collectCurrentVersions;	// 0x33129545
- (BOOL)_currentVersionsMeetPrerequisites:(id)prerequisites;	// 0x331295d5
- (void)_parseVersionData:(id)data;	// 0x33128dcd
- (void)dealloc;	// 0x33128d71
// converted property getter: - (id)mediaUpdateURL;	// 0x33128dbd
@end
