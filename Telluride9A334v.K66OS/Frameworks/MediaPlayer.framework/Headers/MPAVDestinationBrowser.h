/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library


@interface MPAVDestinationBrowser : NSObject {
@private
	BOOL _scansForDestinationsWhenEnteringForeground;	// 4 = 0x4
	BOOL _isScanning;	// 5 = 0x5
	int _retainCount;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL scansForDestinationsWhenEnteringForeground;	// G=0x34e4bcd1; S=0x34e4bce1; 
- (id)init;	// 0x34e4ba91
- (void)_beginScanningForDestinationsNotification:(id)destinationsNotification;	// 0x34e4bd4d
- (void)_endScanningForDestinationsNotification:(id)destinationsNotification;	// 0x34e4bd79
- (BOOL)_isDeallocating;	// 0x34e4ba65
- (BOOL)_tryRetain;	// 0x34e4ba09
- (void)beginScanningForDestinations;	// 0x34e4bc51
- (void)dealloc;	// 0x34e4bb89
- (void)endScanningForDestinations;	// 0x34e4bc91
- (oneway void)release;	// 0x34e4b955
- (id)retain;	// 0x34e4b91d
- (unsigned)retainCount;	// 0x34e4b9f5
// declared property getter: - (BOOL)scansForDestinationsWhenEnteringForeground;	// 0x34e4bcd1
// declared property setter: - (void)setScansForDestinationsWhenEnteringForeground:(BOOL)destinationsWhenEnteringForeground;	// 0x34e4bce1
@end

