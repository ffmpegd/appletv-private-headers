/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObject.h"
#import "NetflixNrdObjectProtocol.h"

@class NetflixNrdObjectCallback;

@interface NetflixMedia : NetflixNrdObject <NetflixNrdObjectProtocol> {
	NetflixNrdObjectCallback *nccpErrorListener_;	// 4 = 0x4
	NetflixNrdObjectCallback *nccpMediaListener_;	// 8 = 0x8
	NetflixNrdObjectCallback *nccpMediaExceptionListener_;	// 12 = 0xc
}
@property(retain, nonatomic) NetflixNrdObjectCallback *nccpErrorListener;	// G=0x4fbe75; S=0x4fbe85; @synthesize=nccpErrorListener_
@property(retain, nonatomic) NetflixNrdObjectCallback *nccpMediaExceptionListener;	// G=0x4fbeb5; S=0x4fbec5; @synthesize=nccpMediaExceptionListener_
@property(retain, nonatomic) NetflixNrdObjectCallback *nccpMediaListener;	// G=0x4fbe95; S=0x4fbea5; @synthesize=nccpMediaListener_
+ (id)sharedInstance;	// 0x4fb1c9
- (id)init;	// 0x4fb2b5
- (void)addEventListener:(id)listener name:(id)name;	// 0x4fb6fd
- (void)close;	// 0x4fbd95
- (void)dealloc;	// 0x4fb40d
- (BOOL)handleEvent:(id)event;	// 0x4fb535
- (void)handleMediaError:(id)error;	// 0x4fbe05
- (void)handleMediaException:(id)exception;	// 0x4fbe3d
- (void)handleNccpError:(id)error;	// 0x4fbdcd
// declared property getter: - (id)nccpErrorListener;	// 0x4fbe75
// declared property getter: - (id)nccpMediaExceptionListener;	// 0x4fbeb5
// declared property getter: - (id)nccpMediaListener;	// 0x4fbe95
- (void)open:(unsigned)open trackId:(unsigned)anId params:(id)params playbackType:(unsigned)type;	// 0x4fb78d
- (void)pause:(int)pause;	// 0x4fbb05
- (void)play:(int)play;	// 0x4fba0d
- (void)play:(int)play audioTrack:(int)track;	// 0x4fba21
- (void)removeEventListener:(id)listener name:(id)name;	// 0x4fb745
- (void)reposition:(int)reposition;	// 0x4fbc4d
// declared property setter: - (void)setNccpErrorListener:(id)listener;	// 0x4fbe85
// declared property setter: - (void)setNccpMediaExceptionListener:(id)listener;	// 0x4fbec5
// declared property setter: - (void)setNccpMediaListener:(id)listener;	// 0x4fbea5
- (void)stop:(int)stop;	// 0x4fbcf1
- (void)unpause:(int)unpause;	// 0x4fbba9
@end

