//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GEORoadMatch : NSObject
{
    CDStruct_f2d78687 *_roadFeature;
    NSString *_roadName;
    CDStruct_2c43369c _coordinateOnRoad;
    double _courseOnRoad;
    double _distanceFromRoad;
    double _roadWidth;
    double _distanceFromJunction;
    double _junctionRadius;
}

- (void).cxx_destruct;
@property(nonatomic) double junctionRadius; // @synthesize junctionRadius=_junctionRadius;
@property(nonatomic) double distanceFromJunction; // @synthesize distanceFromJunction=_distanceFromJunction;
@property(nonatomic) double roadWidth; // @synthesize roadWidth=_roadWidth;
@property(nonatomic) double distanceFromRoad; // @synthesize distanceFromRoad=_distanceFromRoad;
@property(nonatomic) double courseOnRoad; // @synthesize courseOnRoad=_courseOnRoad;
@property(nonatomic) CDStruct_c3b9c2ee coordinateOnRoad; // @synthesize coordinateOnRoad=_coordinateOnRoad;
@property(copy, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
@property(readonly, nonatomic) CDStruct_f2d78687 *roadFeature; // @synthesize roadFeature=_roadFeature;
- (void)setRoadFeature:(CDStruct_f2d78687 *)arg1;
- (void)dealloc;
- (id)initWithCoordinateOnRoad:(CDStruct_c3b9c2ee)arg1 courseOnRoad:(double)arg2;

@end

