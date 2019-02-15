//
//  YAxis.swift
//  CHKLineChart
//
//  Created by Chance on 16/8/31.
//  Copyright © 2016年 Chance. All rights reserved.
//

import Foundation
import UIKit




/**
 Y轴显示的位置
 
 - Left:  左边
 - Right: 右边
 - None:  不显示
 */
public enum CHYAxisShowPosition {
    case left, right, none
}

/// 坐标轴辅助线样式风格
///
/// - none: 不显示
/// - dash: 虚线
/// - solid: 实线
public enum CHAxisReferenceStyle {
    case none
    case dash(color: UIColor, pattern: [NSNumber])
    case solid(color: UIColor)
}

/**
 *  Y轴数据模型
 */
public struct CHYAxis {
    
    // 分时图的Y轴应该是有:
    // 1. 0为中轴, Y轴最大最小值固定为可能的最大最小值
    // 2. 0为中轴, 出现的最大值为上下Y轴的最大最小值
    // 3. 出现的最小最大值为Y轴的最小最大值
    
    // K线图的Y坐标轴至少得有3种: 1.普通坐标 2.对数坐标 3.百分比坐标(适用于叠加品种的时候用,叠加的时候可以设置上下偏移量,不一定要起点一样)
    
    public var max: CGFloat = 0                //Y轴的最大值
    public var min: CGFloat = 0                //Y轴的最小值
    public var ext: CGFloat = 0.00             //上下边界溢出值的比例
    public var baseValue: CGFloat = 0          //固定的基值
    public var tickInterval: Int = 4           //间断显示个数
    public var pos: Int = 0
    public var decimal: Int = 2                //约束小数位
    public var isUsed = false
    
    /// 辅助线样式
    public var referenceStyle: CHAxisReferenceStyle = .dash(color: UIColor(white: 0.2, alpha: 1), pattern: [5])
    
}

/**
 *  X轴数据模型
 */
public struct CHXAxis {
    
    public var tickInterval: Int = 6           //间断显示个数
    
    /// 辅助线样式
    public var referenceStyle: CHAxisReferenceStyle = .none
}
