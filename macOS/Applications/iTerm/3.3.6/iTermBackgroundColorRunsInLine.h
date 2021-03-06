//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface iTermBackgroundColorRunsInLine : NSObject
{
    int _line;
    double _y;
    NSArray *_array;
    long long _numberOfEquivalentRows;
}

+ (id)backgroundRunsInLine:(struct screen_char_t *)arg1 lineLength:(int)arg2 row:(int)arg3 selectedIndexes:(id)arg4 withinRange:(struct _NSRange)arg5 matches:(id)arg6 anyBlink:(char *)arg7 textExtractor:(id)arg8 y:(double)arg9 line:(int)arg10;
+ (void)addBackgroundRun:(CDStruct_56368ce9 *)arg1 toArray:(id)arg2 endingAt:(int)arg3;
@property(nonatomic) long long numberOfEquivalentRows; // @synthesize numberOfEquivalentRows=_numberOfEquivalentRows;
@property(retain, nonatomic) NSArray *array; // @synthesize array=_array;
@property(nonatomic) int line; // @synthesize line=_line;
@property(nonatomic) double y; // @synthesize y=_y;
- (id)description;
- (void)dealloc;

@end

