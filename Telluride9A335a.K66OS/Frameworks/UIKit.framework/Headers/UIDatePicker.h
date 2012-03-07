/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIControl.h"

@class NSCalendar, UIPickerView, NSDate, NSLocale, NSTimeZone;

@interface UIDatePicker : UIControl <NSCoding> {
@private
	UIPickerView *_pickerView;	// 72 = 0x48
}
@property(copy, nonatomic) NSCalendar *calendar;	// G=0x33be46c1; S=0x33be46e1; @dynamic
@property(assign, nonatomic) double countDownDuration;	// G=0x33be47bd; S=0x33be47dd; @dynamic
@property(retain, nonatomic) NSDate *date;	// G=0x33b10f55; S=0x33be4701; @dynamic
@property(retain) id dateComponents;	// G=0x33be488d; S=0x33be48ad; converted property
@property(assign, nonatomic) int datePickerMode;	// G=0x33be4601; S=0x33b06649; @dynamic
@property(retain, nonatomic) NSLocale *locale;	// G=0x33be4661; S=0x33be4671; @dynamic
@property(retain, nonatomic) NSDate *maximumDate;	// G=0x33be477d; S=0x33be479d; @dynamic
@property(retain, nonatomic) NSDate *minimumDate;	// G=0x33be473d; S=0x33be475d; @dynamic
@property(assign, nonatomic) int minuteInterval;	// G=0x33be47fd; S=0x33b069f1; @dynamic
@property(assign) double timeInterval;	// G=0x33be487d; S=0x33be486d; converted property
@property(retain, nonatomic) NSTimeZone *timeZone;	// G=0x33be4681; S=0x33be46a1; @dynamic
@property(assign, nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) BOOL usesBlackChrome;	// G=0x33be49fd; S=0x33be49dd; 
- (id)initWithCoder:(id)coder;	// 0x33be4065
- (id)initWithFrame:(CGRect)frame;	// 0x33b05149
- (float)_contentWidth;	// 0x33be497d
- (void)_insertPickerView;	// 0x33b05461
- (id)_locale;	// 0x33be4621
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33be431d
- (void)_setHidesLabels:(BOOL)labels;	// 0x33be49bd
- (void)_setHighlightsToday:(BOOL)today;	// 0x33be499d
- (void)_setLocale:(id)locale;	// 0x33be4641
// declared property setter: - (void)_setUsesBlackChrome:(BOOL)chrome;	// 0x33be49dd
// declared property getter: - (BOOL)_usesBlackChrome;	// 0x33be49fd
- (void)awakeFromNib;	// 0x33be42b1
// declared property getter: - (id)calendar;	// 0x33be46c1
// declared property getter: - (double)countDownDuration;	// 0x33be47bd
// declared property getter: - (id)date;	// 0x33b10f55
// converted property getter: - (id)dateComponents;	// 0x33be488d
// declared property getter: - (int)datePickerMode;	// 0x33be4601
- (void)encodeWithCoder:(id)coder;	// 0x33be4371
- (int)hour;	// 0x33be490d
// declared property getter: - (id)locale;	// 0x33be4661
// declared property getter: - (id)maximumDate;	// 0x33be477d
// declared property getter: - (id)minimumDate;	// 0x33be473d
- (int)minute;	// 0x33be492d
// declared property getter: - (int)minuteInterval;	// 0x33be47fd
- (int)second;	// 0x33be494d
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x33be46e1
// declared property setter: - (void)setCountDownDuration:(double)duration;	// 0x33be47dd
// declared property setter: - (void)setDate:(id)date;	// 0x33be4701
- (void)setDate:(id)date animate:(BOOL)animate;	// 0x33be496d
- (void)setDate:(id)date animated:(BOOL)animated;	// 0x33b06d41
// converted property setter: - (void)setDateComponents:(id)components;	// 0x33be48ad
// declared property setter: - (void)setDatePickerMode:(int)mode;	// 0x33b06649
- (void)setDelegate:(id)delegate;	// 0x33be484d
- (void)setFrame:(CGRect)frame;	// 0x33b053ed
- (void)setHighlightsToday:(BOOL)today;	// 0x33be48ed
// declared property setter: - (void)setLocale:(id)locale;	// 0x33be4671
// declared property setter: - (void)setMaximumDate:(id)date;	// 0x33be479d
// declared property setter: - (void)setMinimumDate:(id)date;	// 0x33be475d
// declared property setter: - (void)setMinuteInterval:(int)interval;	// 0x33b069f1
- (void)setStaggerTimeIntervals:(BOOL)intervals;	// 0x33be48cd
// converted property setter: - (void)setTimeInterval:(double)interval;	// 0x33be486d
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x33be46a1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33be481d
// converted property getter: - (double)timeInterval;	// 0x33be487d
// declared property getter: - (id)timeZone;	// 0x33be4681
@end

