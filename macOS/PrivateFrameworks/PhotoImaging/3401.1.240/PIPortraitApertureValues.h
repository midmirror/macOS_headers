//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface PIPortraitApertureValues : NSObject
{
    float _aperture;
    NSNumber *_minimumAperture;
    NSNumber *_maximumAperture;
}

+ (id)apertureValuesFromImageProperties:(id)arg1 error:(out id *)arg2;
@property(retain, nonatomic) NSNumber *maximumAperture; // @synthesize maximumAperture=_maximumAperture;
@property(retain, nonatomic) NSNumber *minimumAperture; // @synthesize minimumAperture=_minimumAperture;
@property(nonatomic) float aperture; // @synthesize aperture=_aperture;
- (void).cxx_destruct;
- (id)description;

@end

