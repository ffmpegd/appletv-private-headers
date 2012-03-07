/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVCaptureOutputInternal, NSArray;

@interface AVCaptureOutput : NSObject {
@private
	AVCaptureOutputInternal *_outputInternal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *connections;	// G=0x346ddc71; 
@property(retain) id session;	// G=0x346dd311; S=0x346dd331; converted property
- (id)init;	// 0x346ddcb9
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x346dd795
- (id)addConnection:(id)connection error:(id *)error;	// 0x346dda85
- (void)bumpChangeSeed;	// 0x346dd4a1
- (BOOL)canAddConnectionForMediaType:(id)mediaType;	// 0x346dd351
- (int)changeSeed;	// 0x346dd369
- (id)connectionWithMediaType:(id)mediaType;	// 0x346ddac5
// declared property getter: - (id)connections;	// 0x346ddc71
- (void)dealloc;	// 0x346dd455
- (void)didStartForSession:(id)session;	// 0x346dd355
- (void)didStopForSession:(id)session error:(id)error;	// 0x346dd359
- (id)firstEnabledConnectionForMediaType:(id)mediaType;	// 0x346dd5fd
- (void)handleEnabledChangedForConnection:(id)connection;	// 0x346dd361
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x346dd35d
- (id)liveConnections;	// 0x346dd4fd
- (id)notReadyError;	// 0x346dd365
- (void)removeConnection:(id)connection;	// 0x346dda55
// converted property getter: - (id)session;	// 0x346dd311
// converted property setter: - (void)setSession:(id)session;	// 0x346dd331
@end

