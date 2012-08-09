/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library


@interface MPAVDestinationBrowser : NSObject {
	BOOL _scansForDestinationsWhenEnteringForeground;	// 4 = 0x4
	BOOL _isScanning;	// 5 = 0x5
	int _retainCount;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL scansForDestinationsWhenEnteringForeground;	// G=0x3373c9a9; S=0x3373c9b9; 
- (id)init;	// 0x3373c769
- (void)_beginScanningForDestinationsNotification:(id)destinationsNotification;	// 0x3373ca25
- (void)_endScanningForDestinationsNotification:(id)destinationsNotification;	// 0x3373cab1
- (BOOL)_isDeallocating;	// 0x3373c73d
- (BOOL)_tryRetain;	// 0x3373c6ed
- (void)beginScanningForDestinations;	// 0x3373c929
- (void)dealloc;	// 0x3373c85d
- (void)endScanningForDestinations;	// 0x3373c969
- (oneway void)release;	// 0x3373c639
- (id)retain;	// 0x3373c601
- (unsigned)retainCount;	// 0x3373c6d9
// declared property getter: - (BOOL)scansForDestinationsWhenEnteringForeground;	// 0x3373c9a9
// declared property setter: - (void)setScansForDestinationsWhenEnteringForeground:(BOOL)destinationsWhenEnteringForeground;	// 0x3373c9b9
@end
