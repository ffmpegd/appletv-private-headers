/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import "PrintKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSFileHandle, NSMutableArray;
@protocol PKPrinterBrowserDelegate;

@interface PKPrinterBrowser : NSObject {
	id<PKPrinterBrowserDelegate> delegate;	// 4 = 0x4
@private
	DNSServiceRef_tRef mainBrowserRef;	// 8 = 0x8
	DNSServiceRef_tRef ippBrowserRef;	// 12 = 0xc
	DNSServiceRef_tRef ippsBrowserRef;	// 16 = 0x10
	DNSServiceRef_tRef localippBrowserRef;	// 20 = 0x14
	DNSServiceRef_tRef localippsBrowserRef;	// 24 = 0x18
	NSMutableDictionary *printers;	// 28 = 0x1c
	NSMutableDictionary *printersByUUID;	// 32 = 0x20
	NSFileHandle *handle;	// 36 = 0x24
	unsigned char originalCellFlag;	// 40 = 0x28
	unsigned char originalWifiFlag;	// 41 = 0x29
	dispatch_queue_s *printersQueue;	// 44 = 0x2c
	NSMutableArray *pendingList;	// 48 = 0x30
}
@property(assign, nonatomic) id<PKPrinterBrowserDelegate> delegate;	// G=0x33d5800d; S=0x33d5801d; @synthesize
@property(retain, nonatomic) NSFileHandle *handle;	// G=0x33d57ffd; S=0x33d586a9; @synthesize
@property(retain, nonatomic) NSMutableArray *pendingList;	// G=0x33d57fcd; S=0x33d586f9; @synthesize
@property(retain, nonatomic) NSMutableDictionary *printers;	// G=0x33d57fed; S=0x33d586d1; @synthesize
@property(retain, nonatomic) NSMutableDictionary *printersByUUID;	// G=0x33d57fbd; S=0x33d58721; @synthesize
@property(readonly, assign, nonatomic) dispatch_queue_s *printersQueue;	// G=0x33d57fdd; @synthesize
+ (id)browserWithDelegate:(id)delegate;	// 0x33d58661
- (id)initWithDelegate:(id)delegate;	// 0x33d58edd
- (void)addBlockToPendingList:(id)pendingList;	// 0x33d58ae5
- (void)addLimboPrinter:(id)printer local:(BOOL)local;	// 0x33d58c45
- (void)addQueryResult:(id)result toPrinter:(id)printer;	// 0x33d5823d
- (void)browseCallback:(unsigned)callback interface:(unsigned)interface name:(const char *)name regType:(const char *)type domain:(const char *)domain;	// 0x33d589dd
- (void)browseLocalCallback:(unsigned)callback interface:(unsigned)interface name:(const char *)name regType:(const char *)type domain:(const char *)domain;	// 0x33d588d5
- (void)dealloc;	// 0x33d58d75
// declared property getter: - (id)delegate;	// 0x33d5800d
// declared property getter: - (id)handle;	// 0x33d57ffd
- (void)handleNotification:(id)notification;	// 0x33d58749
// declared property getter: - (id)pendingList;	// 0x33d57fcd
// declared property getter: - (id)printers;	// 0x33d57fed
// declared property getter: - (id)printersByUUID;	// 0x33d57fbd
// declared property getter: - (dispatch_queue_s *)printersQueue;	// 0x33d57fdd
- (void)queryCallback:(int)callback flags:(unsigned)flags fullName:(const char *)name rdlen:(unsigned short)rdlen rdata:(const void *)rdata;	// 0x33d58789
- (void)reissueTXTQuery:(id)query;	// 0x33d58bc9
- (void)removePrinter:(id)printer;	// 0x33d580ad
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33d5801d
// declared property setter: - (void)setHandle:(id)handle;	// 0x33d586a9
// declared property setter: - (void)setPendingList:(id)list;	// 0x33d586f9
// declared property setter: - (void)setPrinters:(id)printers;	// 0x33d586d1
// declared property setter: - (void)setPrintersByUUID:(id)uuid;	// 0x33d58721
@end

