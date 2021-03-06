/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVAssetReaderInternal, AVAsset, NSArray, NSError;

@interface AVAssetReader : NSObject {
	AVAssetReaderInternal *_priv;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAsset *asset;	// G=0x2c28eda9; 
@property(readonly, assign) NSError *error;	// G=0x2c28f101; 
@property(readonly, assign, nonatomic, getter=_figAssetReader) OpaqueFigAssetReader *figAssetReader;	// G=0x2c28fc31; 
@property(readonly, assign, nonatomic) NSArray *outputs;	// G=0x2c28f3f5; 
@property(readonly, assign) int status;	// G=0x2c28edc9; 
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x2c28f2d9; S=0x2c28f31d; 
+ (id)_errorForOSStatus:(long)osstatus;	// 0x2c28ef49
+ (id)assetReaderWithAsset:(id)asset error:(id *)error;	// 0x2c28e49d
+ (void)initialize;	// 0x2c28e46d
- (id)init;	// 0x2c28e4ed
- (id)initWithAsset:(id)asset error:(id *)error;	// 0x2c28e501
- (BOOL)_canAddOutput:(id)output exceptionReason:(id *)reason;	// 0x2c28f431
// declared property getter: - (OpaqueFigAssetReader *)_figAssetReader;	// 0x2c28fc31
- (void)_handleServerDiedNotification;	// 0x2c28fbf5
- (void)_tearDownFigAssetReader;	// 0x2c28ec71
- (void)_transitionToStatus:(int)status failureError:(id)error;	// 0x2c28ef81
- (void)addOutput:(id)output;	// 0x2c28f581
// declared property getter: - (id)asset;	// 0x2c28eda9
- (BOOL)canAddOutput:(id)output;	// 0x2c28f515
- (void)cancelReading;	// 0x2c28fac9
- (void)dealloc;	// 0x2c28ea29
- (id)description;	// 0x2c28ed25
// declared property getter: - (id)error;	// 0x2c28f101
- (void)finalize;	// 0x2c28ec01
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x2c28f6d9
// declared property getter: - (id)outputs;	// 0x2c28f3f5
// declared property setter: - (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x2c28f31d
- (BOOL)startReading;	// 0x2c28f805
// declared property getter: - (int)status;	// 0x2c28edc9
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x2c28f2d9
@end

