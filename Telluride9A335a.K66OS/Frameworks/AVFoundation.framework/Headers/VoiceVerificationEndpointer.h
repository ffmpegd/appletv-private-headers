/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "Endpointer.h"
#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"


@interface VoiceVerificationEndpointer : NSObject <Endpointer> {
}
@property(assign) double endWaitTime;	// G=0x3237998d; S=0x323799a1; 
@property(assign) int endpointMode;	// G=0x32379955; S=0x32379959; 
@property(assign) double interspeechWaitTime;	// G=0x32379975; S=0x32379989; 
@property(assign) double startWaitTime;	// G=0x3237995d; S=0x32379971; 
- (id)init;	// 0x323799a5
- (BOOL)configureWithSampleRate:(double)sampleRate andFrameRate:(unsigned long)rate;	// 0x32379949
- (void)dealloc;	// 0x323799d1
// declared property getter: - (double)endWaitTime;	// 0x3237998d
// declared property getter: - (int)endpointMode;	// 0x32379955
- (int)getStatus:(AudioQueueBuffer *)status;	// 0x3237994d
// declared property getter: - (double)interspeechWaitTime;	// 0x32379975
- (void)reset;	// 0x32379951
// declared property setter: - (void)setEndWaitTime:(double)time;	// 0x323799a1
// declared property setter: - (void)setEndpointMode:(int)mode;	// 0x32379959
// declared property setter: - (void)setInterspeechWaitTime:(double)time;	// 0x32379989
// declared property setter: - (void)setStartWaitTime:(double)time;	// 0x32379971
// declared property getter: - (double)startWaitTime;	// 0x3237995d
@end

