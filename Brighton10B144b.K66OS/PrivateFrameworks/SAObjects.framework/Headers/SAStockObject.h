/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSNumber, NSString, NSArray;

@interface SAStockObject : SADomainObject {
}
@property(copy, nonatomic) NSNumber *averageDailyVolume;	// G=0x353d0c95; S=0x353d0cb1; 
@property(copy, nonatomic) NSNumber *change;	// G=0x353d0d01; S=0x353d0d1d; 
@property(copy, nonatomic) NSNumber *changePercent;	// G=0x353d0d6d; S=0x353d0d89; 
@property(copy, nonatomic) NSString *chartData;	// G=0x353d0dd9; S=0x353d0df5; 
@property(copy, nonatomic) NSString *currency;	// G=0x353d0e45; S=0x353d0e61; 
@property(copy, nonatomic) NSString *displayStyle;	// G=0x353d0eb1; S=0x353d0ecd; 
@property(copy, nonatomic) NSNumber *dividendYield;	// G=0x353d0f1d; S=0x353d0f39; 
@property(copy, nonatomic) NSNumber *earningsPerShare;	// G=0x353d0f89; S=0x353d0fa5; 
@property(copy, nonatomic) NSString *exchange;	// G=0x353d0ff5; S=0x353d1011; 
@property(copy, nonatomic) NSNumber *high;	// G=0x353d1061; S=0x353d107d; 
@property(copy, nonatomic) NSString *link;	// G=0x353d10cd; S=0x353d10e9; 
@property(copy, nonatomic) NSNumber *low;	// G=0x353d1139; S=0x353d1155; 
@property(copy, nonatomic) NSString *marketCap;	// G=0x353d11a5; S=0x353d11c1; 
@property(copy, nonatomic) NSString *name;	// G=0x353d1211; S=0x353d122d; 
@property(copy, nonatomic) NSNumber *open;	// G=0x353d127d; S=0x353d1299; 
@property(copy, nonatomic) NSNumber *peRatio;	// G=0x353d12e9; S=0x353d1305; 
@property(copy, nonatomic) NSNumber *prevClose;	// G=0x353d1355; S=0x353d1371; 
@property(copy, nonatomic) NSNumber *price;	// G=0x353d13c1; S=0x353d13dd; 
@property(copy, nonatomic) NSNumber *realTimeChange;	// G=0x353d142d; S=0x353d1449; 
@property(copy, nonatomic) NSNumber *realTimeChangePercent;	// G=0x353d1499; S=0x353d14b5; 
@property(copy, nonatomic) NSNumber *realTimePrice;	// G=0x353d1505; S=0x353d1521; 
@property(copy, nonatomic) NSNumber *realTimeTS;	// G=0x353d1571; S=0x353d158d; 
@property(copy, nonatomic) NSArray *requests;	// G=0x353d15dd; S=0x353d1659; 
@property(copy, nonatomic) NSNumber *status;	// G=0x353d16c1; S=0x353d16dd; 
@property(copy, nonatomic) NSArray *stockNews;	// G=0x353d172d; S=0x353d17a9; 
@property(copy, nonatomic) NSString *symbol;	// G=0x353d1811; S=0x353d182d; 
@property(copy, nonatomic) NSNumber *timeStamp;	// G=0x353d187d; S=0x353d1899; 
@property(copy, nonatomic) NSNumber *volume;	// G=0x353d18e9; S=0x353d1905; 
@property(copy, nonatomic) NSString *yearRange;	// G=0x353d1955; S=0x353d1971; 
+ (id)object;	// 0x353d0c05
+ (id)objectWithDictionary:(id)dictionary context:(id)context;	// 0x353d0c49
// declared property getter: - (id)averageDailyVolume;	// 0x353d0c95
// declared property getter: - (id)change;	// 0x353d0d01
// declared property getter: - (id)changePercent;	// 0x353d0d6d
// declared property getter: - (id)chartData;	// 0x353d0dd9
// declared property getter: - (id)currency;	// 0x353d0e45
// declared property getter: - (id)displayStyle;	// 0x353d0eb1
// declared property getter: - (id)dividendYield;	// 0x353d0f1d
// declared property getter: - (id)earningsPerShare;	// 0x353d0f89
- (id)encodedClassName;	// 0x353d0bf9
// declared property getter: - (id)exchange;	// 0x353d0ff5
- (id)groupIdentifier;	// 0x353d0be9
// declared property getter: - (id)high;	// 0x353d1061
// declared property getter: - (id)link;	// 0x353d10cd
// declared property getter: - (id)low;	// 0x353d1139
// declared property getter: - (id)marketCap;	// 0x353d11a5
// declared property getter: - (id)name;	// 0x353d1211
// declared property getter: - (id)open;	// 0x353d127d
// declared property getter: - (id)peRatio;	// 0x353d12e9
// declared property getter: - (id)prevClose;	// 0x353d1355
// declared property getter: - (id)price;	// 0x353d13c1
// declared property getter: - (id)realTimeChange;	// 0x353d142d
// declared property getter: - (id)realTimeChangePercent;	// 0x353d1499
// declared property getter: - (id)realTimePrice;	// 0x353d1505
// declared property getter: - (id)realTimeTS;	// 0x353d1571
// declared property getter: - (id)requests;	// 0x353d15dd
// declared property setter: - (void)setAverageDailyVolume:(id)volume;	// 0x353d0cb1
// declared property setter: - (void)setChange:(id)change;	// 0x353d0d1d
// declared property setter: - (void)setChangePercent:(id)percent;	// 0x353d0d89
// declared property setter: - (void)setChartData:(id)data;	// 0x353d0df5
// declared property setter: - (void)setCurrency:(id)currency;	// 0x353d0e61
// declared property setter: - (void)setDisplayStyle:(id)style;	// 0x353d0ecd
// declared property setter: - (void)setDividendYield:(id)yield;	// 0x353d0f39
// declared property setter: - (void)setEarningsPerShare:(id)share;	// 0x353d0fa5
// declared property setter: - (void)setExchange:(id)exchange;	// 0x353d1011
// declared property setter: - (void)setHigh:(id)high;	// 0x353d107d
// declared property setter: - (void)setLink:(id)link;	// 0x353d10e9
// declared property setter: - (void)setLow:(id)low;	// 0x353d1155
// declared property setter: - (void)setMarketCap:(id)cap;	// 0x353d11c1
// declared property setter: - (void)setName:(id)name;	// 0x353d122d
// declared property setter: - (void)setOpen:(id)open;	// 0x353d1299
// declared property setter: - (void)setPeRatio:(id)ratio;	// 0x353d1305
// declared property setter: - (void)setPrevClose:(id)close;	// 0x353d1371
// declared property setter: - (void)setPrice:(id)price;	// 0x353d13dd
// declared property setter: - (void)setRealTimeChange:(id)change;	// 0x353d1449
// declared property setter: - (void)setRealTimeChangePercent:(id)percent;	// 0x353d14b5
// declared property setter: - (void)setRealTimePrice:(id)price;	// 0x353d1521
// declared property setter: - (void)setRealTimeTS:(id)ts;	// 0x353d158d
// declared property setter: - (void)setRequests:(id)requests;	// 0x353d1659
// declared property setter: - (void)setStatus:(id)status;	// 0x353d16dd
// declared property setter: - (void)setStockNews:(id)news;	// 0x353d17a9
// declared property setter: - (void)setSymbol:(id)symbol;	// 0x353d182d
// declared property setter: - (void)setTimeStamp:(id)stamp;	// 0x353d1899
// declared property setter: - (void)setVolume:(id)volume;	// 0x353d1905
// declared property setter: - (void)setYearRange:(id)range;	// 0x353d1971
// declared property getter: - (id)status;	// 0x353d16c1
// declared property getter: - (id)stockNews;	// 0x353d172d
// declared property getter: - (id)symbol;	// 0x353d1811
// declared property getter: - (id)timeStamp;	// 0x353d187d
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353d19c1
// declared property getter: - (id)volume;	// 0x353d18e9
// declared property getter: - (id)yearRange;	// 0x353d1955
@end

