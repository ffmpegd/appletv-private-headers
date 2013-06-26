/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface SSOperationProgress : NSObject <SSXPCCoding, NSCopying> {
	BOOL _canPause;	// 4 = 0x4
	double _changeRate;	// 8 = 0x8
	long long _currentValue;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
	double _estimatedTimeRemaining;	// 28 = 0x1c
	long long _maxValue;	// 36 = 0x24
	long long _normalizedCurrentValue;	// 44 = 0x2c
	long long _normalizedMaxValue;	// 52 = 0x34
	int _operationType;	// 60 = 0x3c
	NSMutableArray *_snapshotTimes;	// 64 = 0x40
	NSMutableArray *_snapshotValues;	// 68 = 0x44
	int _units;	// 72 = 0x48
}
@property(assign) BOOL canPause;	// G=0x35692d3d; S=0x35693529; 
@property(assign) double changeRate;	// G=0x35692e0d; S=0x356935a9; 
@property(assign) long long currentValue;	// G=0x35692efd; S=0x35693641; 
@property(assign) double estimatedTimeRemaining;	// G=0x35692fe1; S=0x356936d9; 
@property(assign) long long maxValue;	// G=0x356930d5; S=0x35693771; 
@property(assign) long long normalizedCurrentValue;	// G=0x356931b9; S=0x35693809; 
@property(assign) long long normalizedMaxValue;	// G=0x356932b5; S=0x356938a1; 
@property(assign) int operationType;	// G=0x356933b1; S=0x35693939; 
@property(assign) int units;	// G=0x35693c3d; S=0x356939b9; 
- (id)init;	// 0x35692a51
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x356940c5
- (void)_updateStatisticsFromSnapshots;	// 0x35694261
// declared property getter: - (BOOL)canPause;	// 0x35692d3d
// declared property getter: - (double)changeRate;	// 0x35692e0d
- (id)copyWithZone:(NSZone *)zone;	// 0x35692b69
- (id)copyXPCEncoding;	// 0x35693f75
// declared property getter: - (long long)currentValue;	// 0x35692efd
- (void)dealloc;	// 0x35692af5
- (id)description;	// 0x35693d09
// declared property getter: - (double)estimatedTimeRemaining;	// 0x35692fe1
// declared property getter: - (long long)maxValue;	// 0x356930d5
// declared property getter: - (long long)normalizedCurrentValue;	// 0x356931b9
// declared property getter: - (long long)normalizedMaxValue;	// 0x356932b5
// declared property getter: - (int)operationType;	// 0x356933b1
- (void)resetSnapshots;	// 0x3569347d
// declared property setter: - (void)setCanPause:(BOOL)pause;	// 0x35693529
// declared property setter: - (void)setChangeRate:(double)rate;	// 0x356935a9
// declared property setter: - (void)setCurrentValue:(long long)value;	// 0x35693641
// declared property setter: - (void)setEstimatedTimeRemaining:(double)remaining;	// 0x356936d9
// declared property setter: - (void)setMaxValue:(long long)value;	// 0x35693771
// declared property setter: - (void)setNormalizedCurrentValue:(long long)value;	// 0x35693809
// declared property setter: - (void)setNormalizedMaxValue:(long long)value;	// 0x356938a1
// declared property setter: - (void)setOperationType:(int)type;	// 0x35693939
// declared property setter: - (void)setUnits:(int)units;	// 0x356939b9
- (void)snapshot;	// 0x35693a39
// declared property getter: - (int)units;	// 0x35693c3d
@end
