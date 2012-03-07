/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <CALayer.h> // Unknown library

@class AVCaptureVideoPreviewLayerInternal, AVCaptureSession, NSString;

@interface AVCaptureVideoPreviewLayer : CALayer {
	AVCaptureVideoPreviewLayerInternal *_internal;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL automaticallyAdjustsMirroring;	// G=0x3234d701; S=0x3234d545; 
@property(assign, getter=isChromaNoiseReductionEnabled) BOOL chromaNoiseReductionEnabled;	// G=0x3234d105; S=0x3234cfd9; converted property
@property(assign, nonatomic, getter=isMirrored) BOOL mirrored;	// G=0x3234d50d; S=0x3234d329; 
@property(readonly, assign, nonatomic, getter=isMirroringSupported) BOOL mirroringSupported;	// G=0x3234c721; 
@property(assign, nonatomic) int orientation;	// G=0x3234c439; S=0x3234d739; 
@property(readonly, assign, nonatomic, getter=isOrientationSupported) BOOL orientationSupported;	// G=0x3234c435; 
@property(assign, getter=isPaused) BOOL paused;	// G=0x3234d2f1; S=0x3234d18d; converted property
@property(retain, nonatomic) AVCaptureSession *session;	// G=0x3234c569; S=0x3234c5ad; 
@property(copy) NSString *videoGravity;	// G=0x3234c401; S=0x3234d981; 
+ (void)initialize;	// 0x3234c3fd
+ (id)layerWithSession:(id)session;	// 0x3234c92d
- (id)initWithLayer:(id)layer;	// 0x3234e3e9
- (id)initWithSession:(id)session;	// 0x3234e69d
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x3234cac1
- (id)activeConnections;	// 0x3234c975
- (id)addConnection:(id)connection error:(id *)error;	// 0x3234c83d
// declared property getter: - (BOOL)automaticallyAdjustsMirroring;	// 0x3234d701
- (BOOL)canAddConnectionForMediaType:(id)mediaType;	// 0x3234c8f1
- (void)centerSublayer;	// 0x3234c461
- (id)connectionMediaTypes;	// 0x3234c7e5
- (id)connections;	// 0x3234c79d
- (void)dealloc;	// 0x3234e29d
- (void)didStartForSession:(id)session;	// 0x3234cc49
- (void)didStopForSession:(id)session error:(id)error;	// 0x3234c459
// converted property getter: - (BOOL)isChromaNoiseReductionEnabled;	// 0x3234d105
- (BOOL)isChromaNoiseReductionSupported;	// 0x3234d13d
// declared property getter: - (BOOL)isMirrored;	// 0x3234d50d
// declared property getter: - (BOOL)isMirroringSupported;	// 0x3234c721
// declared property getter: - (BOOL)isOrientationSupported;	// 0x3234c435
// converted property getter: - (BOOL)isPaused;	// 0x3234d2f1
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x3234cf71
- (void)layoutSublayers;	// 0x3234df79
- (id)notReadyError;	// 0x3234c45d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3234dc8d
// declared property getter: - (int)orientation;	// 0x3234c439
- (float)previewRotationDegrees;	// 0x3234e665
- (void)removeConnection:(id)connection;	// 0x3234c87d
// declared property getter: - (id)session;	// 0x3234c569
// declared property setter: - (void)setAutomaticallyAdjustsMirroring:(BOOL)mirroring;	// 0x3234d545
- (void)setBounds:(CGRect)bounds;	// 0x3234e215
// converted property setter: - (void)setChromaNoiseReductionEnabled:(BOOL)enabled;	// 0x3234cfd9
- (void)setHidden:(BOOL)hidden;	// 0x3234cf45
// declared property setter: - (void)setMirrored:(BOOL)mirrored;	// 0x3234d329
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x3234d739
// converted property setter: - (void)setPaused:(BOOL)paused;	// 0x3234d18d
// declared property setter: - (void)setSession:(id)session;	// 0x3234c5ad
// declared property setter: - (void)setVideoGravity:(id)gravity;	// 0x3234d981
- (id)subLayer;	// 0x3234c6dd
// declared property getter: - (id)videoGravity;	// 0x3234c401
@end

