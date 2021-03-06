/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDate;

@interface BRChapter : NSObject {
@private
	NSString *_name;	// 4 = 0x4
	NSString *_description;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
	double _startTime;	// 16 = 0x10
	double _endTime;	// 24 = 0x18
	NSDate *_startDate;	// 32 = 0x20
	NSDate *_endDate;	// 36 = 0x24
}
@property(retain, nonatomic) NSString *description;	// G=0x35ea3a65; S=0x35ea3a75; @synthesize=_description
@property(retain, nonatomic) NSDate *endDate;	// G=0x35ea3b59; S=0x35ea3b69; @synthesize=_endDate
@property(assign, nonatomic) double endTime;	// G=0x35ea3af9; S=0x35ea3b11; @synthesize=_endTime
@property(retain, nonatomic) NSString *identifier;	// G=0x35ea3a99; S=0x35ea3aa9; @synthesize=_identifier
@property(retain, nonatomic) NSString *name;	// G=0x35ea3a31; S=0x35ea3a41; @synthesize=_name
@property(retain, nonatomic) NSDate *startDate;	// G=0x35ea3b25; S=0x35ea3b35; @synthesize=_startDate
@property(assign, nonatomic) double startTime;	// G=0x35ea3acd; S=0x35ea3ae5; @synthesize=_startTime
+ (id)chapterWithAssetID:(id)assetID startDate:(id)date endDate:(id)date3;	// 0x35ea364d
+ (id)chapterWithAssetID:(id)assetID startTime:(double)time endTime:(double)time3;	// 0x35ea35fd
- (id)initWithAssetID:(id)assetID startDate:(id)date endDate:(id)date3;	// 0x35ea3769
- (id)initWithAssetID:(id)assetID startTime:(double)time endTime:(double)time3;	// 0x35ea3695
- (BOOL)containsDate:(id)date;	// 0x35ea39a5
- (BOOL)containsTime:(double)time;	// 0x35ea38cd
- (void)dealloc;	// 0x35ea3835
// declared property getter: - (id)description;	// 0x35ea3a65
// declared property getter: - (id)endDate;	// 0x35ea3b59
// declared property getter: - (double)endTime;	// 0x35ea3af9
// declared property getter: - (id)identifier;	// 0x35ea3a99
- (id)imageProxy;	// 0x35ea3a2d
- (void)invalidate;	// 0x35ea38c9
// declared property getter: - (id)name;	// 0x35ea3a31
// declared property setter: - (void)setDescription:(id)description;	// 0x35ea3a75
// declared property setter: - (void)setEndDate:(id)date;	// 0x35ea3b69
// declared property setter: - (void)setEndTime:(double)time;	// 0x35ea3b11
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x35ea3aa9
// declared property setter: - (void)setName:(id)name;	// 0x35ea3a41
// declared property setter: - (void)setStartDate:(id)date;	// 0x35ea3b35
// declared property setter: - (void)setStartTime:(double)time;	// 0x35ea3ae5
// declared property getter: - (id)startDate;	// 0x35ea3b25
// declared property getter: - (double)startTime;	// 0x35ea3acd
@end

