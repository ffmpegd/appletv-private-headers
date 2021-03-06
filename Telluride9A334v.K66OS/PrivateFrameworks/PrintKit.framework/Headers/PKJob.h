/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSData, PKPrintSettings, NSDate;

@interface PKJob : NSObject {
@private
	int number;	// 4 = 0x4
	int mediaProgress;	// 8 = 0x8
	int mediaSheets;	// 12 = 0xc
	int mediaSheetsCompleted;	// 16 = 0x10
	NSString *printerDisplayName;	// 20 = 0x14
	int printerKind;	// 24 = 0x18
	NSString *printerLocation;	// 28 = 0x1c
	PKPrintSettings *settings;	// 32 = 0x20
	int state;	// 36 = 0x24
	NSDate *timeAtCompleted;	// 40 = 0x28
	NSDate *timeAtCreation;	// 44 = 0x2c
	NSDate *timeAtProcessing;	// 48 = 0x30
@protected
	NSData *thumbnailImage;	// 52 = 0x34
}
@property(assign, nonatomic) int mediaProgress;	// G=0x317f532d; S=0x317f533d; @synthesize
@property(assign, nonatomic) int mediaSheets;	// G=0x317f530d; S=0x317f531d; @synthesize
@property(assign, nonatomic) int mediaSheetsCompleted;	// G=0x317f52ed; S=0x317f52fd; @synthesize
@property(assign, nonatomic) int number;	// G=0x317f534d; S=0x317f535d; @synthesize
@property(retain, nonatomic) NSString *printerDisplayName;	// G=0x317f52dd; S=0x317f598d; @synthesize
@property(assign, nonatomic) int printerKind;	// G=0x317f52bd; S=0x317f52cd; @synthesize
@property(retain, nonatomic) NSString *printerLocation;	// G=0x317f52ad; S=0x317f5965; @synthesize
@property(retain, nonatomic) PKPrintSettings *settings;	// G=0x317f529d; S=0x317f593d; @synthesize
@property(assign, nonatomic) int state;	// G=0x317f527d; S=0x317f528d; @synthesize
@property(retain, nonatomic) NSData *thumbnailImage;	// G=0x317f523d; S=0x317f589d; @synthesize
@property(retain, nonatomic) NSDate *timeAtCompleted;	// G=0x317f526d; S=0x317f5915; @synthesize
@property(retain, nonatomic) NSDate *timeAtCreation;	// G=0x317f525d; S=0x317f58ed; @synthesize
@property(retain, nonatomic) NSDate *timeAtProcessing;	// G=0x317f524d; S=0x317f58c5; @synthesize
+ (id)currentJob;	// 0x317f5d09
+ (id)jobs;	// 0x317f6325
- (int)cancel;	// 0x317f536d
// declared property getter: - (int)mediaProgress;	// 0x317f532d
// declared property getter: - (int)mediaSheets;	// 0x317f530d
// declared property getter: - (int)mediaSheetsCompleted;	// 0x317f52ed
// declared property getter: - (int)number;	// 0x317f534d
// declared property getter: - (id)printerDisplayName;	// 0x317f52dd
// declared property getter: - (int)printerKind;	// 0x317f52bd
// declared property getter: - (id)printerLocation;	// 0x317f52ad
// declared property setter: - (void)setMediaProgress:(int)progress;	// 0x317f533d
// declared property setter: - (void)setMediaSheets:(int)sheets;	// 0x317f531d
// declared property setter: - (void)setMediaSheetsCompleted:(int)completed;	// 0x317f52fd
// declared property setter: - (void)setNumber:(int)number;	// 0x317f535d
// declared property setter: - (void)setPrinterDisplayName:(id)name;	// 0x317f598d
// declared property setter: - (void)setPrinterKind:(int)kind;	// 0x317f52cd
// declared property setter: - (void)setPrinterLocation:(id)location;	// 0x317f5965
// declared property setter: - (void)setSettings:(id)settings;	// 0x317f593d
// declared property setter: - (void)setState:(int)state;	// 0x317f528d
// declared property setter: - (void)setThumbnailImage:(id)image;	// 0x317f589d
// declared property setter: - (void)setTimeAtCompleted:(id)completed;	// 0x317f5915
// declared property setter: - (void)setTimeAtCreation:(id)creation;	// 0x317f58ed
// declared property setter: - (void)setTimeAtProcessing:(id)processing;	// 0x317f58c5
// declared property getter: - (id)settings;	// 0x317f529d
// declared property getter: - (int)state;	// 0x317f527d
// declared property getter: - (id)thumbnailImage;	// 0x317f523d
// declared property getter: - (id)timeAtCompleted;	// 0x317f526d
// declared property getter: - (id)timeAtCreation;	// 0x317f525d
// declared property getter: - (id)timeAtProcessing;	// 0x317f524d
- (int)update;	// 0x317f552d
@end

